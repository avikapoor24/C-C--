#include<stdio.h>

int main() {
    int size, i, n;
    float average, sum=0;

    printf("enter number of elements ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++){
        printf("enter number %d ", i);
        scanf("%d", &n);

        sum = sum + n;
        n=0;
    }

    average = sum/size;
    printf("average is %f", average);

    return 0;
}