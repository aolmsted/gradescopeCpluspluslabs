#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float bmimetricf(int weight, float height)
{
  return weight / pow(height,2);
}