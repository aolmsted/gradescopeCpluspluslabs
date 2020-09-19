#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;

void runtest(int search, int lst[], int elements, int answer) {
   int x = binary_search(search, lst, elements);
   if(x == answer)
        printf("Passed All Tests");
     else
        cout << "Failed test on int: " << search << " on an array length of " << elements <<  " answer returned " << x << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    int lst[] = {0, 1, 2, 18, 19, 20, 25};
    if(arg == 1) {
      runtest(20, lst, 7, 2);
    }
    if(arg == 2) {
      runtest(19, lst,7, 3);
    }
    if(arg == 3) {
      runtest(-1, lst,7, 3);
    }

    return 0;
}
