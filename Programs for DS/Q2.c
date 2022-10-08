//Q.2] Aim 2: To delete an element at user-defined array element from linear element.     Date-22/sept
#include<stdio.h>
int main()
{
    int lin_arr[100],n,item,k;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements of array: ",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&lin_arr[i]);
    }
    printf("\nEnter the location of element you want to delete: ");
    scanf("%d",&k);
    item=lin_arr[k];
    printf("\nThe number to be deleted is: %d",item);
    for(int j=k;j<=(n-1);j++)
    {
        lin_arr[j]=lin_arr[j+1];
    }
    n=n-1;
    printf("\n New array is: ");
    for(int z=1;z<=n;z++)
    {
        printf(" %d ",lin_arr[z]);
    }
    printf("\nAvi Kapoor 05313202721\n");
    return 0;
}