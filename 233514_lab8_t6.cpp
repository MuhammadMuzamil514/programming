#include <iostream>   //M.Muzamil   233514   bs cs(B)
using namespace std;

int main() {
int celsius_temperature;
double fahrenheit;
    cout<< "Celsius "<< "Fahrenheit" << endl;

    for (int celsius_temperature = 0; celsius_temperature <= 20; celsius_temperature++) {	
    fahrenheit = (celsius_temperature * 9 / 5)+ 32;
    cout<<"celsius into fahrenheit is: " <<fahrenheit << endl;
    }
}
