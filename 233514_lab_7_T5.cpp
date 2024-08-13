#include<iostream>
using namespace std;
int main(){
int choice;
double area, radius, length, width, base, height;
const double PI = 3.14159;
const int CIRCLE_CHOICE = 1,
RECTANGLE_CHOICE = 2,
TRIANGLE_CHOICE = 3,
QUIT_CHOICE = 4;
cout<<"Geometry Calculator"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"1. Area of Circle"<<endl;
cout<<"2. Area of Rectangle"<<endl;
cout<<"3. Area of Triangle"<<endl;
cout<<"4. Quit "<<endl;
cout<<"Enter your selection (1-4):  "<<endl;
cin>>choice; 
switch(choice)
{
case CIRCLE_CHOICE:
cout<<"Enter the radius of the circle: ";
cin>>radius;
if(radius < 0)
{
cout<<"Radius cannot be negative!! "<<endl;
cout<<"Enter radius again: ";
cin>>radius;
}
area= PI * radius * radius;
cout<<"The circle's area is = "<<area<<" square units ";
break;
case RECTANGLE_CHOICE:
cout<<"Enter the length of the rectangle: ";
cin>>length;
if(length < 0)
{
cout<<"Length cannot be less than 0!! "<<endl;
cout<<"Enter length again: ";
cin>>length;
}
cout<<"Enter the width of the rectangle: ";
cin>>width;
if(width < 0)
{
cout<<"Width cannot be less than 0!! "<<endl;
cout<<"Enter width again: ";
cin>>width;
}
area = length * width;
cout << "The rectangle's area is = " << area << " square units \n\n";
break;
case TRIANGLE_CHOICE:
cout<<"Enter the base of the triangle: ";
cin>>base;
if(base < 0)
{
cout<<"Base cannot be less than 0!!  "<<endl;
cout<<"Enter base again: ";
cin>>base;
}
cout<<"Enter the height of the triangle: ";
cin>>height;
if(height < 0)
{
cout<<"Height cannot be less than 0!! "<<endl;
cout<<"Enter height again: ";
cin >> height;
}
area = base * height * 0.5;
cout<<"The triangle's area is = "<<area<<" square units \n\n";
break;
case QUIT_CHOICE:
cout<<"The program is ending...";
break;
default:
cout<<"The valid choices are 1-4 so run the program again!";
}
}
