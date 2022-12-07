#include <iostream>
#include <cmath>
using namespace std;

class factorial{
    private:
        int num;
        long long int f=1;
    public:
        factorial(int n){
            num=n;
        }
        long long int fact();
};

long long int factorial::fact(){
    for(int i=1;i<=num;i++){
                                                                                                                                                                
        f*=i;
    }
    return f;
}

int main(){
    cout<<("05313202721 , AVI KAPOOR , CSE-1(B)");
    int n;
    cout<<"\n\nEnter the number: ";
    cin>>n;
    factorial f1(n);
    long long int result=f1.fact();
    cout<<"Factorial of the number is : "<<result<<endl;
    return 0;
}
