//Q.1] Aim 1: To insert an element at user-defined position array.                        Date-22/sept
#include<stdio.h>
int main()
{
    int lin_arr[100],n,item,k;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements of array: ",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&lin_arr[i]);
    }
    printf("\nEnter the element you want to insert: ");
    scanf("%d",&item);
    printf("\nEnter the position you want to insert the element: ");
    scanf("%d",&k);
    int j=n;
    while(j>=k)
    {
        lin_arr[j+1]=lin_arr[j];
        j=j-1;
    }
    lin_arr[k]=item;
    n=n+1;
    printf("\n final array after inserting the value is: ");
    for(int l=1;l<=n;l++)
    {
        printf(" %d ",lin_arr[l]);
    }
    printf("\nAvi Kapoor 05313202721\n");
    return 0;
}