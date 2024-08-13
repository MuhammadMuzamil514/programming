#include<iostream>
using namespace std;   //M.Muzamil   233514  bs cs(b)
int main(){
	
	
	int number ;
	int factorial=1;
	int value=1;
	cout<<"Enter the number:";
	cin>>number;
	while(value<=number){
		factorial=factorial*number;
		value++;
		cout<<"factorial of: "<<number<<factorial<<endl;
		cout<<factorial;
	}
}
