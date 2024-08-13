#include<iostream>    //M.Muzamil    233514  Bs cs(B)
using namespace std;
int main() {
    while (true) {
    cout<<"Choose an operation:" <<endl;
    cout<<"1. Addition " <<endl;
    cout<<"2. Subtraction" <<endl;
    cout<<"3. Multiplication" <<endl;
    cout<<"4. Division" <<endl;
    cout<<"5. Exit" <<endl;
    int choice;
    cout<<"Enter your choice (1-5): ";
    cin>> choice;
    if(choice == 5) {
    cout<< "Exiting the program." << endl;
    break;
        }
 else if(choice >= 1 && choice <= 4) {
    double num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    switch(choice) {
    case 1:
    cout<<"Result: " << num1 + num2 <<endl;
    break;
    case 2:
    cout<<"result"<<num1-num2<<endl;
    
    break;
    case 3:
    cout<< "Result: " <<num1 * num2 <<endl;
    break;
    case 4:
    if(num2 != 0) {
    cout<<"Result: " <<num1 / num2 <<endl;
    }
	else{
    cout<< "Invalid input" <<endl;
    }
    break;
    if(num2 != 0) {
    cout<<"Result: " << num1 / num2 <<endl;
    } 
	else {
    cout<<"Error: Division by zero!" <<endl;
    }
    break;
    }
    } 
	else{
    cout<< "Invalid choice.enter a number between 1 and 5." <<endl;
    }
    }
	 }
