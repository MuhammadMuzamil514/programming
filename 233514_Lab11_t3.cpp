#include <iostream>      //M.Muzamil   233514   BS CS(B)
using namespace std;

bool checkNum(int num) {
    return (num % 2 == 0);
    
}

int main() {
int userInput;   
cout<<"Enter an integer: ";
cin>> userInput;
 if (checkNum(userInput)) {

cout<<"True"<<endl;
    } else
 {
    cout<<"False" <<endl;
    }

}
