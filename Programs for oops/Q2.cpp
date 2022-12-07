#include <iostream>
#include <cmath>
using namespace std;
class gcd{
    private:
        int a,b;
    public:
        gcd(int x,int y){
            a=x;
                                                                                                           
                                                                                                                                                             
            b=y;
        }
        int gcdAns();
        int lcm();
};
int gcd::gcdAns(){
    int r = 0, c, d;
    c = (a > b) ? a : b;
    d = (a < b) ? a : b;
    r = d;
    while (c % d != 0) {    
        r = c % d;
        c = d; 
        d = r;
    } 
    return r;
}
int gcd::lcm(){
    int lcm1;
    lcm1 = (a > b) ? a : b;
    while (true){
        if (lcm1 % a == 0 && lcm1 % b == 0)   
            return lcm1; 
        ++a;
    }
}
int main(){
    cout << "08113202721 , GAGANDEEP KAUR , CSE-2(A)";
    int x,y,hcf,l;
    cout<<"\n\nEnter two numbers x,y: ";
                                                                                                                                                             
    cin>>x>>y;
    gcd G(x,y);
    hcf=G.gcdAns();
    l=G.lcm();
    cout<<"LCM of the numbers is: "<<l<<endl;
    cout<<"GCD of the numbers is: "<<hcf<<endl;
}
