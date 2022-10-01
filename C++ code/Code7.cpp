//Q.7] WAP for a rolling dice. {Use the formula~ "[rand() % (maxValue - minValue +1)]+ minValue"}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 7;
    cout << number<<endl;
    return 0; 
} 