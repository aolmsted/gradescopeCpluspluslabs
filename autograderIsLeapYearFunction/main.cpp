#include <stdio.h>
#include <stdlib.h>
#include "cpluspluslabs.h"


int main(int argc, char** argv) {
    // Random number between 1 and 2020
    int year = rand() % 2020 + 1;
    int isleapyeart = (!(year % 4)  && ((year % 100) || !(year % 400)));
    if(isleapyear(year) == isleapyeart)
        printf("Passed All Tests");
     else
        printf("Fail test of year: %i",year);
    return 0;
}
