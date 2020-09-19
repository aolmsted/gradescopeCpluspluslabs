#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>     
#include <iostream>  
#include "cpluspluslabs.h"

using namespace std;
void runtest(int testdata) {
    double *data;
    data = getDoubles(testdata);
   if(data[0] == 0 && data[1] == 1/3)
        printf("Passed All Tests");
     else
        cout << "Failed test on int: " << testdata << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    if(arg == 1) {
      runtest(1);
    }
    if(arg == 2) {
      runtest(10);
    }
    if(arg == 3) {
      runtest(100);
    }

    return 0;
}
