#include <iostream>   //M.Muzamil      233514  BS CS(B)
#include <iomanip>
using namespace std;
int main() {
    const int numMonths= 12;
    double rainfall[numMonths]; 
    for (int i= 0; i<numMonths; ++i) {
    do 
	{
    cout<<"Enter  the rainfall for month "<<(i + 1)<<": ";
    cin>> rainfall[i];
    if (rainfall[i]< 0) {
    cout<<"Please enter a non-negative value for rainfall."<<endl;
 }
} 
while(rainfall[i]< 0);
}

    double totalRainfall = 0.0;
    for(int i = 0; i< numMonths; ++i) {
    totalRainfall+= rainfall[i];
}

    double averageRainfall =totalRainfall / numMonths;

    
    int highestMonth = 0;
    int lowestMonth = 0;

    for (int i = 1; i<numMonths; ++i) {
    if (rainfall[i]>rainfall[highestMonth]) {
    highestMonth =i;
}
    if (rainfall[i]<rainfall[lowestMonth]) {
    lowestMonth= i;    }
}

    cout<<"Total rainfall in the year: " <<totalRainfall <<" units." <<endl;
    cout<<"Average of monthly rainfall: " << averageRainfall << " units." <<endl;
    cout<<"Month that is highest rainfall: "<<(highestMonth + 1)<<" with "<<rainfall[highestMonth]<<"units."<<endl;
    cout<<"Month that is lowest rainfall: "<<(lowestMonth + 1)<<" with "<<rainfall[lowestMonth]<<" units."<<endl;

    
}

