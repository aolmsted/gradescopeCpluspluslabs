#include <stdio.h>
#include <stdlib.h>

int binary_search(int search_value, int lst[], int elements)
{
  int i = 0;
  int l = 0;
  int r = elements - 1;
  int mid; 
  do {
      mid = l + (r - l) / 2; 
      i++;
      if (lst[mid] > search_value) r = mid - 1;
      if (lst[mid] < search_value) l = mid + 1;
  } while (r >= l &&  lst[mid] != search_value);
  return i;  
}
