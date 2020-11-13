#include <stdio.h>
#include <stdlib.h>

bool isleapyear(int year)
{
  return !(year % 4)  && ((year % 100) || !(year % 400));
}