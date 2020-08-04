#include <stdio.h>
#include <stdlib.h>

int maxinlst(int lst[],int size)
{
  int max = lst[0];
  for(int i=1;i < size; i++)
    if(lst[i] > max)
      max = lst[i];
  return max;
}