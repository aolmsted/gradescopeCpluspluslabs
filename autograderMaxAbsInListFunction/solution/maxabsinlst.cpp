#include <stdio.h>
#include <stdlib.h>

int maxinlst(int lst[],int size)
{
  int max = abs(lst[0]);
  for(int i=1;i < size; i++)
    if(abs(lst[i]) > max)
      max = abs(lst[i]);
  return max;
}