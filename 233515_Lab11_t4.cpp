#include <iostream>   //M.Muzamil    233514  BS CS (B)
using namespace std;
int addNums(int num1, int num2) {
    return num1 + num2;
}

int main() {
 int firstNum;
 int secondNum;
    cout<<"Enter the first number: ";
    cin>>firstNum;

    cout<<"Enter the second number: ";
    cin>>secondNum;

    
    int sum = addNums(firstNum, secondNum);
    cout<<"The sum is: " <<sum<<endl;


}
