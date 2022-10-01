//Q.3] Mathematical Problems: 1. z= [x+10]/3y
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y;
    float z;
    cout << "1. Enter values for x and y in expresion z= [x+10]/3y"<< endl;
    cin >> x;
    cin >> y;
    
    z=(x+10)/(3*y);
    cout << "Answer of 1st part[z] is= " << z << endl;

    return 0;
}