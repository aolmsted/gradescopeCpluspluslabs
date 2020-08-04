#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include "cpluspluslabs.h"


int main(int argc, char** argv) {
    // Random number between 1 and 2020
    float height = (rand() % 200 + 1) / 100;
    int weight = rand() % 70 + 1;
    float bmimetrict =  round(weight * 100 / pow(height,2)) ;
    if(round(bmimetricf(weight,height) * 100) == bmimetrict)
        printf("Passed All Tests");
     else
        printf("Fail test of weight: %i and height: %2.1f - BMI should be %3.2f, returned value was %3.2f",weight,height,bmimetrict /100, bmimetricf(weight,height));
    return 0;
}
