
#include <iostream>
#include <cmath>
using namespace std;
class IsPrime
{
    public:
    void Prime(){
        for (int i = 2; i <= 100; ++i){
            int ctr = 0;
            for (int j = 2; j <= sqrt(i); ++j){
                if (i % j == 0)
                    ctr = 1;
            }
            if (ctr == 0)
                cout << i << " ";
        }
    }
};
                                                                                                                                                              
int main()
{
    cout << ("05313202721 , AVI KAPOOR , CSE-1(B)");
    cout << "\n\nPrime Numbers between 1 and 100 are:\n";
    IsPrime P;
    P.Prime();
    return 0;
}
