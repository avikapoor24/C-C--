#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x - 5*x + 3
#define df(x) 3*x*x - 5
 
int main(){
    printf("TALVINDER SINGH MEHAR2\t CSE-1 \n");
    float x0, x1, x2, f0, f1, f2, df0;
    int i=1, N;
    printf("enter initial guesses:\n");
    scanf("%f %f", &x1, &x2);
    printf("enter max number of iteration: ");
    scanf("%d", &N);
 
    f1 = f(x1);
    f2 = f(x2);
    if(f1*f2 > 0.0){
        printf("wrong initial guess\n");
        exit(0);
    }
    else if(fabs(f1) < fabs(f2)){
            x0 = x1;
    }
    else{
        x0 = x2;
    }
 
    do{
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - ( f0/df0);
        printf("iteration number: %d\t\t\t", i);
        printf("approximate root is: %f\t\t\t", x1);
        x0 = x1;
        i++;
        if(i>N){
            printf("\nnot convergent\n");
            exit(0);
        }
        printf("value of function is: %f\t\n", f1);
        f1 = f(x1);
    } while (fabs(f0/df0) > e);
    printf("\n hence root is: %f\n", x1);
}
