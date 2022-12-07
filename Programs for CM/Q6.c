#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-5*x-3
#define df(x) 3*x*x-5

int main(){

    float x0, x1, x2, f0, f1, f2, df0;
    int i = 1, N;
    printf("\n enter initial guess:\n");

    scanf("%d", &N);
    f1 = f(x1);
    f2 = f(x2);
    if(f1*f2>0.0){
        printf("\n wrong initial");
        exit(0);
    }
    else if(fab(f1)<fabs(f2))
    {
        x0 = x1;
    }

    do{
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - (f0 / df0);
        printf("iteration number: %d\t\t", 1);
        printf("\t approximate root is: %f\t\t", x1);
        x0 = x1;
        i++;
        if(i>N)
        {
            printf("\n not convergent\n");
            exit(0);
        }
        print("value of fn is: %f\t\n", f1);
        f1 = f(x1);

    } while (fabs(f0 / f1) > e);
    print("\n hence root is : %f\t\n", x1);
    return 0;
}