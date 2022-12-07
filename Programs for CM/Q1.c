//date- 18th Oct, Q.1] Implementing the Bisection Method
#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x - 4*x -9

int main(){

    float a,b,x1,fa,fb,fx1 ;
    int i = 0;
    printf("\n enter 2 initial guess: \n");
    scanf("%f%f", &a, &b);
    fa = f(a);
    fb = f(b);
    
    if(fa*fb>0.0)
        printf("\n wrong Initial guess:\n");
    else 
        do
        {
            x1 = (a + b) / 2;
            fx1 = f(x1);
            if(f(x1)<0.0)
                a = x1;
            else
                b = x1;
            i++;
            printf("no. of iterations:%d\t\t", i);
            printf("\troot is:%f\t\t", x1);
            printf("value of fn is:%f\t\n", i);
        } while (fabs(b - a) >= e);

    return 0;
}



