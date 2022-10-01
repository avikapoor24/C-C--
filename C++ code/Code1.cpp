//Q.1] Write a code to swap the values of 2 Variables.
#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a = 1, b = 2,temp=a;
    a = b;
    b = temp;
    cout << b <<endl;
    return 0;
} 