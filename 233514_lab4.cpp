#include<iostream>   //M.Muzamil   233514   bs cs(b)
using namespace std;
int main(){
	 
	 
	 const double class_A=15,class_B=12, class_C=9;
	double ticket_sold_A,ticket_sold_B,ticket_sold_C,total_income;
	 double total_A,total_B,total_C;
	 
	 
	 cout<<"ticket_sold_A:";
	cin>>ticket_sold_A;
	 
	 cout<<"ticket_sold_B:";
	 cin>>ticket_sold_B;
	 cout<<"ticket_sold_C:";
	 cin>>ticket_sold_C;
	 total_A =ticket_sold_A*class_A;
	 
	 total_B=ticket_sold_B*class_B;
	 
	 total_C=ticket_sold_C*class_C;
	 
	 total_income=total_A+total_B+total_C;
	 cout<<"Total income:"<<total_income;
	
	
	
	
}
