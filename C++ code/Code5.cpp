//Q.5] Write a program to convert Temperature from Fahrenheit to Celcius.
#include<iostream>
using namespace std;

int main()
{
    float Cel, Fahr;
    cout << "Enter the value to be Converted to Celcius [Value in Fahrenheit(F)]: ";
    cin >> Fahr;
    cout << "Temperature in Celius: " << (Fahr-32)/(1.8) <<" Celcius"<<endl;

    return 0;
} 