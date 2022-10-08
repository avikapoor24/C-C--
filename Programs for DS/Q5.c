//Q.5] Aim 5: To sort a linear array using bubble Sort.                 Date-
#include<stdio.h>
int main()
{
int array[100],n,i,ptr,swap;
printf("\nEnter the number of elements in array: ");
scanf("%d",&n);
printf("\nEnter %d elements of the array in unsorted manner: ",n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
ptr=0;
while(ptr<=n-i-1)
{
if(array[ptr]>array[ptr+1])
{
swap=array[ptr];
array[ptr]=array[ptr+1];
array[ptr+1]=swap;
}
ptr=ptr+1;
}
}
printf("\nArray in ascending order: ");
for(i=0;i<n;i++)
{
printf(" %d ",array[i]);
}
printf("\nAvi Kapoor 05313202721\n");
return 0;
}