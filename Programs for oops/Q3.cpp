#include <iostream>
using namespace std;
class fibonacci{
    private:
    int a, b, c, j, num;
    public:
    fibonacci(int n){
        num=n;
    }
    void show(){
        a = 0, b = 1;
        cout << "the fibonacci series is : " << a <<" " << b<<" ";
        for (j = 3; j <= num; j++){
            c = a + b;
            cout << c <<" ";
            a = b;
            b = c;
                                                                
        }
    }
};
int main(){
    cout<<"\n";
    cout << "05313202721 , AVI KAPOOR , CSE-1(B)";
    int n;
    cout << "\n\nEnter the number : ";
    cin >> n;
    fibonacci obj(n);
    obj.show();
}
