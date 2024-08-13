#include<iostream>       //M.Muzamil     233514   BS CS(B) 
using namespace std;
double getRadius(double radius){
	
	cout<<"Enter the radius: ";
	cin>>radius;
	return radius;
}
double computeArea(double  radius){
	
	double area=radius*radius*3.14;
	return area;
	
}
int main(){
	
double radius=getRadius(radius);
double area=computeArea(radius);
cout<<"Area of circle is: "<<area<<endl;

}
