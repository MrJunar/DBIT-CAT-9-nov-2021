#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

float gross;
float net;
float tax;
cout<<"This is a program for calculating your tax and net salary.\n";
cout<<"Please input your gross salary. \n";
cin>> gross;
tax = (25/100) * gross;
net = gross - tax;
cout<< "The amount you owe in tax is: " << tax << " Your net salary is: "<< net<< endl;
}
