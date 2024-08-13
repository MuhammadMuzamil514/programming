#include<iostream>       //M.Muzamil   233514   Bs cs(B)
using namespace std;
int main() {
    const double rise_Rate_per_year =3.1; // in millimeters per year
    const int num_years =25;
    cout<<"Total Rise(mm)"<<endl;
    double total_Rise = 0.0;
    for(int year =1; year<= num_years; ++year) {
    total_Rise += rise_Rate_per_year;
    cout<<year << "     " << total_Rise << "\n";
    }
}
