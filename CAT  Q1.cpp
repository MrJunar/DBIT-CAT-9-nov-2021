#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

float temp;
float fahrenheit;
const float celsius = (5.0/9.0);
cout<<"This is a program for converting fahrenheit to celcius.\n";
cout<<"Please input the the fahrenheit temperature. \n";
cin>> fahrenheit;
temp = celsius * (fahrenheit - 32.0);
cout<< "The temperature in celcius is: " << temp << endl;
}
