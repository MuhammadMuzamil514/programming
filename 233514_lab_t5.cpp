#include<iostream>   //M.Muzamil   233514 bs cs (B)
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int r_num1,r_num2;
	int max=50;
	int min=10;
	int sum;
	int user_input;
	srand(time(0));
	
	r_num1=(rand()%(max-min+1))+min;
	
	r_num2=(r_num2%(max-min+1))+min;
	cout<<"Add the answer:";
	cout<<r_num1<<","<<r_num2<<endl;
	cout<<"Answer is:";
		cin>>user_input;
	sum=r_num1+r_num2;

	if(sum=user_input){
		cout<<"Congratulation!That is correct";
	}
	else{
		cout<<"Sorry,the correct answer is:"<<sum;
	}
	
	
	
	
	
	
	
	
	
	
}
