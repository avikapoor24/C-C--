#include <stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x-cos(x)
int main(){
    float a,b,x1,fa,fb,fx1;
    int i=0;
    printf("\nEnter 2 initial guess:\n");
    scanf("%f%f",&a,&b);
    fa=f(a);
    fb=f(b);
    if(fa*fb>0.0)
        printf("\nincorrect initial guess:\n");
    else{
        do{
            x1=(a+b)/2;
            fx1=f(x1);
            if(f(x1)<0.0){
                a=x1;  }
            else{
                b=x1;  }
            i++;
            printf("no. of iterations:%d\t\t",i);
            printf("\troot is:%f\t\t",x1);
            printf("value of fn is:%f\t\n",fx1);
        }while(fabs(b-a)>=e);
    }
    printf("\n\n03313202721 , anshdeep singh , CSE-1(B)");
    return 0;
}