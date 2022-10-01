//Q.6] Find Area of Circle.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    const double pi = 3.14;
    double r{}, A{};
   
    cout << "Radius of Circle in Meters is ";
    cin >> r;
    double r2 = pow(r, 2);
    A = pi * r2;
    cout << "Area of the Circle = " << A << " Sq. meters\n";
   
    return 0;
} 