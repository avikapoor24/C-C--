// Q.2] Area of a circle
#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    const double pi = 3.14;
    double A = 0, r=0;

    cout << "Value of radius: ";
    cin >> r;
    A = 2 * pi * r;
    cout << A<< endl;

    return 0;
}