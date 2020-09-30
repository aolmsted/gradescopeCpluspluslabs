#include <stdio.h>
#include <stdlib.h>

double* getDoubles(int numDoubles)
{
  double* data = new double[numDoubles];
  for(int i = 1; i <= numDoubles; i++)
  {
    data[i-1] = i/3.0;
  }  
  return data;  

}