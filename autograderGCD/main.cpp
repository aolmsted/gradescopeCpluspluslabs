#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>     
#include <iostream>  
#include "cpluspluslabs.h"

using namespace std;
void runtest(int testdata1, int testdata2, int testdata3) {
    int data;
    data = gcd(testdata1, testdata2);
   if(data == testdata3)
        printf("Passed All Tests");
     else
        cout << "Failed test on ints: " << testdata1 << " " << testdata2 << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    if(arg == 1) {
      runtest(5,15,5);
    }
    if(arg == 2) {
      runtest(14,21,7);
    }
    if(arg == 3) {
      runtest(15,25,5);
    }

    return 0;
}
