#include <stdio.h>
#include <stdlib.h>

float avgoflst(int lst[],int size)
{
  int sum = 0;
  for(int i=0;i < size; i++)
      sum += lst[i];
  return sum / size;
}