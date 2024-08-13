#include<iostream>   //M.Muzamil  233514  bs cs(b)
using namespace std;
int main(){
	int units_consumed;
	double bill;
	
	cout<<"Enter the units:";
	cin>>units_consumed;
	if(units_consumed>4000){
		bill=units_consumed*100,
		bill=bill+(bill*0.03);
		cout<<" Electricity bill is:"<<bill;}
		
		else if(units_consumed<4000){
		
			bill=units_consumed*100;
			cout<<"Then Electicity bill is:"<<bill;
	}
		
		
		
		
	
	
	
	
	
	
	
}
