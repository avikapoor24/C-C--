//Q.4] Aim 4: To search an element from a linear array using Binary search.               Date-29/sept
#include <stdio.h>
int main()
{
  int i, beg, end, mid, n, item, array[100];
  printf("\nEnter number of elements: ");
  scanf("%d",&n);
  printf("\nEnter %d elements of array in ascending order are: ",n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("\nEnter value to find in array: ");
  scanf("%d",&item);
  beg = 0; end = n - 1; mid = (beg+end)/2;
  while (beg <= end) 
  {
    if (item<array[mid])
      end = mid - 1;
    else if (array[mid] == item) 
    {
      printf("%d found at location %d.\n", item, mid+1);
      break;
    }
    else
    {
      beg = mid + 1;
    }
    mid = (beg + end)/2;
  }
  if (beg > end)
  printf("Not found! %d isn't present in the list.\n", item);
  printf("\nAvi Kapoor 05313202721\n");
  return 0;
}