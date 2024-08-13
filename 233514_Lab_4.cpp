#include<iostream>
using namespace std;   //M.Muzamil    233514  bs cs(b)
int main(){
	double number_of_males, number_of_females ,total_students,percentage_of_males,percentage_of_females;
	
	cout<<"Number_of_males:";
	cin>>number_of_males;
	cout<<"Number_of_females:";
	cin>>number_of_females;
	total_students=number_of_males+number_of_females;
	cout<<"Total_students="<<total_students<<endl;
	percentage_of_males=number_of_males/total_students*100;
	percentage_of_females=number_of_females/total_students*100;
	
	cout<<"Percentage_of_males:"<<percentage_of_males<<endl;
	cout<<"Percentage_of_females:"<<percentage_of_females<<endl;
}
