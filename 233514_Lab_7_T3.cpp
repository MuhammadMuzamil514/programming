#include<iostream>
using namespace std;
int main(){
	float seconds;
	cout<<"Enter the number of seconds:";
	cin>>seconds;
	
	
	if(seconds>=86400){
	cout<<"days is :   " <<seconds/86400<<endl;}
	else if(seconds<86400  &&  seconds>=3600){
	
   cout << "Hours is :    " <<seconds/3600 << endl;}
   else if(seconds<3600  &&  seconds<=60){
   
    cout << "Minutes is  : " <<seconds/60 << endl;}
    
   
}
   
