#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>     
#include <iostream>  
#include "cpluspluslabs.h"

using namespace std;
void runtest(int testdata, bool result) {
    bool data;
    data = is_palindrome(testdata);
   if(data == result)
        printf("Passed All Tests");
     else
        cout << "Failed test on int: " << testdata << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    if(arg == 1) {
      runtest(12321,true);
    }
    if(arg == 2) {
      runtest(12345,false);
    }
    if(arg == 3) {
      runtest(1,true);
    }

    return 0;
}
