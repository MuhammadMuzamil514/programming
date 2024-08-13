#include <iostream>     //M.Muzamil   233514  BS CS(B)
using namespace std;
#include <string>
const int Salsas = 5;
int main() {
    string salsaNames[Salsas]= {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[Salsas];

    for (int i= 0; i<Salsas; ++i) {
    do {
    cout<< "Enter number of jars sold for "<<salsaNames[i]<<" salsa: ";
    cin>> jarsSold[i];
    if (jarsSold[i] < 0) {
    cout << "Please enter a non-negative value for jars sold." <<endl;
 }
    } while (jarsSold[i] < 0);
    }
    int totalSales= 0;
    for (int i= 0; i<Salsas; ++i) {
    totalSales += jarsSold[i];
    }
    int highestIndex= 0;
    int lowestIndex= 0;
    for (int i= 1; i<Salsas; ++i) {
    if (jarsSold[i]>jarsSold[highestIndex]) {
    highestIndex = i;
    }
    if (jarsSold[i]<jarsSold[lowestIndex]) {
    lowestIndex= i;
}
}
   cout<<"Sales Report:"<<endl;
    for (int i = 0; i<Salsas; ++i) {
    cout<<salsaNames[i]<< " salsa: "<<jarsSold[i]<<" jars sold."<<endl;
}

    cout<<"Total Sales: "<<totalSales<<" jars."<<endl;
    cout<<"Highest Selling Salsa: "<<salsaNames[highestIndex]<<" with "<<jarsSold[highestIndex]<<"jars sold."<<endl;
    cout<<"Lowest Selling Salsa: "<<salsaNames[lowestIndex]<<" with "<<jarsSold[lowestIndex]<<"jars sold."<<endl;

}

