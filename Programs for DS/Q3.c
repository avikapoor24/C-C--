//Q.3] Aim 3: To search an element from a linear array using linear search.               Date-29/sept
#include <stdio.h>
int main()
{
    int array[100],n,i,item,found = 0;
    printf("\nEnter the number of elements in array: ");
    scanf("%d", &n);
    printf("\nEnter %d elements of the array: ",n);
    for (i = 0 ;i<n ;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &item);
    for (i =0 ;i<n ;i++)
    {
        if (item == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("\nElement present in the array at position %d",i+1);
    else
        printf("\nElement is not present in the array\n");
    printf("\nAvi Kapoor 05313202721\n");
    return 0;
}