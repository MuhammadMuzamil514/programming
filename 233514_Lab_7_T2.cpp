#include<iostream>
using namespace std;
int main(){
	
	int month,day,year, last_two_digits,magic_date;
	cout<<"Enter the month:";
	cin>>month;
	cout<<"Enter the day:";
	cin>>day;
	cout<<"Enter the last two digits of year:";
	cin>>year;
     if(month>0|| month<=12 &&day<=31 &&year>0 || year<=last_two_digits){
     cout<<""; 
	 }
    
     
    if(day*month==year){
    	cout<<"Date is magic.";
	}
	else{cout<<"Date is not magic.";
	}

	
}
