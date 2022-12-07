#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a,b,c,D,r1,r2;
 cout << "AVI KAPOOR || Enrollment no.-05313202721 || CSE-1(B)";
 cout<<"\nEnter the coefficient of x^2:";
 cin>>a;
 2;
 cout << "\nEnter the coefficient of x^1:";
 cin>>b;
 cout<<"\nEnter the constant term:";
 cin>>c;
 D=(b*b)-(4*a*c);
 if(D>0){
 r1=(-b+(sqrt(D)))/(2*a);
 r2=(-b-(sqrt(D)))/(2*a);
 cout<<"\nRoots are REAL and DISTINCT"<<endl;
 cout<<"r1= "<<r1<<endl;
 cout<<"r2= "<<r2<<endl;
 }
 else if(D==0){
 r1=(-b)/(2*a);
 cout<<"\nRoots are SAME"<<endl;
 cout<<"r1 = r2 = "<<r1<<endl;
 }
 else{
 r1=(-b+(sqrt(fabs(D))))/(2*a);
 r1=(-b-(sqrt(fabs(D))))/(2*a);
 cout<<"\nRoots are IMAGINARY"<<endl;
 cout<<"r1= "<<r1<<endl;
 cout<<"r2= "<<r2<<endl;
 } return 0;
} 
