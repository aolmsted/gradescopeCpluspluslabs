#include <stdio.h>
#include <stdlib.h>
#include <time.h>       
#include <unistd.h>
#include "cpluspluslabs.h"


int main(int argc, char** argv) {
    // Random number between 1 and 2020
    srand (time(NULL) * getpid());
    int t1 = rand() % 2000 + 1;
    int t2 = rand() % 2000 + 1;
    int t3 = rand() % 2000 + 1;
    int t4 = rand() % 2000 + 1;
    int t5 = rand() % 2000 + 1;
    int lst[] = {t1, t2, t3, t4, t5 };
    int max = lst[0];
    for(int i=1; i < 5;i++)
      if(lst[i] > max)
        max = lst[i];
    int result = maxinlst(lst,5);    
    if(result == max)
        printf("Passed All Tests");
     else
        printf("Fail test where max is: %i returned; %i",max,result);
    return 0;
}
