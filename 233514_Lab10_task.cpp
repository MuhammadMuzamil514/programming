#include <iostream>            //M.Muzamil   233514 BS CS (B)
using namespace std;
int main() 
{

   cout << "a)  "<<endl;                                                                       
    for (int i = 1; i <= 5; ++i) {
    	
    for (int j = 5; j >= i; --j) {
    cout << "* ";
    }
    cout <<endl;
    }
    cout << "b)  "<<endl;                                                                       
    for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= i; ++j) {
    cout << "* ";
    }
    cout <<endl;
    }
    
    
    cout << "c)  "<<endl;                                                                      
    for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j < i; ++j) {
    }
    for (int j = 5; j >= i; --j) {
    cout << "* ";
    }
    cout <<endl;
    }
    cout << "d)  "<<endl;                                                                              
    for (int i = 1; i <= 5; ++i) {
    
    for (int j = 5; j > i; --j) {
    } 
    for (int j = 1; j <= i; ++j) {
    cout << "* ";
    }
    cout <<endl;
    }
    
    
    cout << "e)  "<<endl;                                                                           
    for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= 5; ++j) {
    if (i == 1 || i == 5 || j == 1 || j == 5) {
    cout << "* ";
    } else {
    cout << "  ";
    }
    }
    cout <<endl;
    }

    
    
    cout << "f)  "<<endl;                                                      
    for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= 5; ++j) {
    cout << "* ";
    }
    cout <<endl;
    }
}
