#include <iostream>   //M.Muzamil  233514  BS CS(B)
using namespace std;
int main() {
    const int Size =15;
    int array[Size];
    for (int i =0; i<Size; ++i) {
    array[i]; 
    }  
    cout<< "Enter a search key (integer value): ";
    int searchKey;
    cin>>searchKey;
    int Index= -1; 

    for (int i =0; i<Size; ++i) {
    if (array[i]==searchKey) {
    Index= i;
    
}
    }   
    if (Index!= -1) {
    cout<<"Key found at index: "<<Index<<endl;
} 
	else {
    cout<<"Key not found!"<<endl;
    }

    
}

