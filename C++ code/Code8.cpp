//Q.8] WAP for a rolling dice. {Use the formula~ "[rand() % (maxValue - minValue +1)]+ minValue"}
//Alternate for Q.7
#include<bits/stdc++.h>
using namespace std;

int main()
{
    const short minValue{1}, maxValue{6};
    srand(time(0));
    short Dice1 {(rand() % (maxValue - minValue +1)) + minValue};
    short Dice2 {(rand() % (maxValue - minValue +1)) + minValue};

    cout << Dice1 <<" ,"<<Dice2<<endl;
    return 0;
}