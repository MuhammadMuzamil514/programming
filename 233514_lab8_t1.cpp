#include<iostream>      //M.Muzamil   233514  bs cs(B)
using namespace std;
int main(){
	int number,digit=1;
	cout<<"Enter the number to generate:"<<endl;
	cout<<"Multiplication table is: ";
	cin>>number;
	
	while(digit<=10){
		cout<<"2"<<"*"<<digit<<"="<<digit*number<<endl;
		digit++;
	}
}
