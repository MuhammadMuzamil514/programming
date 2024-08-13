#include<iostream>  //M.Muzamil  233514   bs cs(B)
using namespace std;
int main(){
	int num1;
	int num2;
	int sum;
	char choice;
	bool wish=true;
	
	cout<<"Enter  first number : ";  
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	do{
	sum=num1+num2;
	cout<<"sum of numbers is:"<<sum<<endl;
	cout <<"if user wishes to terminate the program(y/n)?"<<endl;

	

	if(choice=='N'  ||  choice=='n')
	wish=false;
	
	}
	while (wish==true);
		
	
}
