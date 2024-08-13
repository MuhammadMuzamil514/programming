#include <iostream>   //  M.Muzamil   233514  BS CS(B)
using namespace std;
int main() {
    const int ROWS= 7;
    const int COLUMS= 7;
    char array[ROWS][COLUMS];

    for (int i= 0; i<ROWS; ++i) {
    for (int j= 0; j<COLUMS; ++j) {
    array[i][j]= 'x';
 }
 }

    for (int i = 0; i<ROWS; ++i) {
    for (int j = 0; j<COLUMS; ++j) {
    cout<<array[i][j]<< " ";
}
    cout <<endl;
}

}

