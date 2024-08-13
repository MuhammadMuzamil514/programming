#include <iostream>    //M.Muzamil   233514  BS CS (B)
using namespace std;
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length=getLength();
    double width=getWidth();
    double area=getArea(length, width);
    displayData(length, width, area);

}

double getLength() {
    double length;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    return length;
}

double getWidth() {
    double width;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;
    return width;
}

double getArea(double length, double width) {
    return length*width;
}

void displayData(double length, double width, double area) {
    cout<<"Length is : "<<length <<endl;
    cout<<"Width is :  "<<width <<endl;
    cout<<"Area of rectangle is :  "<<area <<endl;
}
