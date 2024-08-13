#include <iostream> 
using namespace std;  //M.Muzamil   233514  BS CS(B)
#include <ctime> 
#include <cstdlib> 
const int rows= 10;
const int cols= 10;
void populateArray(int arr[rows][cols]) {
  srand(time(0));

    for (int i= 0; i<rows; ++i) {
    for (int j= 0; j<cols; ++j) {
    arr[i][j]=rand() % 10;}
}
}
void displayArray(int arr[rows][cols]) {
    for (int i= 0; i<rows; ++i) {
    for (int j= 0; j<cols; ++j) {
	cout<< arr[i][j] << " ";
}
    cout<<endl;
}
}
bool searchArray(int arr[rows][cols], int target, int& rowFound, int& colmFound) {

    for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
    if (arr[i][j] == target) {
    rowFound = i;
    colmFound = j;
    return true; 
 }
 }
}

    return false;
}

int main() {
    int myArray[rows][cols];
    int userNumber;

    populateArray(myArray);
    cout<<"Array Content:"<<endl;
    displayArray(myArray);

    cout<<"Enter a number to search for: ";
    cin>>userNumber;
    int rowFound, colmFound;
    if (searchArray(myArray, userNumber, rowFound, colmFound)) {
	cout<<"Number found at location: Row "<<rowFound + 1<<", Column "<<colmFound + 1<<endl;
    } 
	else
	{
    cout<<"Value not found."<<endl;
    }

}

