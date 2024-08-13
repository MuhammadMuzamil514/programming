#include<iostream>
using namespace std;
int main(){

	float number;
	cout<<"Enter the marks:";
	cin>>number;
	if(number>=85  &&  number<=100){
		cout<< "A+";
	}
	else if(number>=80  && number<85){
		cout<<"A-";	
	}
	else if(number>=75   && number<80){
		cout<<"B+";
	}
	else if(number>=70  && number<75){
		cout<<"B";
	}
	else if(number>=65  && number<70){
		cout<<"B-";
	}
	else if(number>=60  &&  number<65){
		cout<<"C+";
	}
	else if(number>=50  &&  number<60){
		cout<<"C";
		
	}
	else if(number<=50 &&   number>0){
		cout<<"F";
	}
	
	
	
	
	
}
