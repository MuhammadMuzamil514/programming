#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter the year:";
	cin>>year;
	if(year%100==0  &&   year%400==0  )
	{
		cout<<"february has 29 days.";}
	
	 if(year%100!=0  && year%4==0){
		cout<<"february has 29 days.";}
		else {
			cout<<"febuary has not 29 days.";
		}
		
	
	
}
	
	
	
	
	
	
	

