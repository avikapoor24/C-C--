#include<stdio.h>

#define size 2

void multiply(int a[size][size], int b[size][size], int c[size][size]);

int main() {
    int a[size][size], b[size][size], c[size][size];
    int i,j;
    printf("enter matrix A\n");
    for(i =0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter matrix B\n");
    for(i =0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &b[i][j]);
        }
    }

    multiply(a,b,c);

    return 0;
}

void multiply(int a1[size][size], int a2[size][size], int a3[size][size]){
    int r,c,k;
    for(r=0; r<size; r++) {
        for(c=0; c<size; c++) {
            a3[r][c] =0;
            for(k=0; k<size; k++) {
                a3[r][c] = a3[r][c] + (a1[r][k]*a2[k][c]);
            }
        }
    }
    printf("product of matrices is: \n");
    for(r=0; r<size; r++) {
        for(c=0; c<size; c++) {
            printf("%d  ", a3[r][c]);
        }
        printf("\n");
    }
}