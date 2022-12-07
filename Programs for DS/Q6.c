#include <stdio.h>

int main()
{
    int i, j, r, c, t = 0, q;
    printf("Name: Avi Kapoor\tBranch: CSE-1\n");
    printf("enter rows :");
    scanf("%d", &r);
    printf("enter columns :");
    scanf("%d", &c);
    printf("enter value to array: \n ");
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("your entered matrix: \n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                t++;
            }
        }
    }

    int b[t + 1][3];

    b[0][0] = r;
    b[0][1] = c;
    b[0][2] = t;
    q = 1;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                b[q][0] = i;
                b[q][1] = j;
                b[q][2] = a[i][j];
                q ++;
            }
        }
    }

    printf("\n sparce matrix \n");

    for (i = 0; i < t+1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
}