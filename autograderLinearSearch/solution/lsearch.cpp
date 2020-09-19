#include <stdio.h>
#include <stdlib.h>

int linear_search(int search_value, int lst[], int elements)
{
  int i;
  for(i = 0; i < elements; i++)
    if(lst[i] == search_value) return i+1;
  return elements;  
}