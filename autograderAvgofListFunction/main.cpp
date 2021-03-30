#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>       
#include "cpluspluslabs.h"


int main(int argc, char** argv) {
    // Random number between 1 and 2020
    srand (time(NULL));
    int t1 = rand() % 2000 + 1;
    int t2 = rand() % 2000 + 1;
    int t3 = rand() % 2000 + 1;
    int t4 = rand() % 2000 + 1;
    int t5 = rand() % 2000 + 1;
    int lst[] = {t1, t2, t3, t4, t5 };
    float sum = 0;
    for(int i=0; i < 5;i++)
        sum += lst[i];
    float avg = sum / 5;    
    float ravg = avgoflst(lst,5);
    if(round(ravg * 100) == round(avg * 100))
        printf("Passed All Tests");
     else
        printf("Fail test where avg is: %3.2f returned %3.2f",avg/100,ravg/100);
    return 0;
}
