#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;

void runtest(int lst[], int middle, int elements) {
   merge(lst, 0,middle,elements-1);
   if(lst[1] > lst[0] && lst[2] > lst[1])
        printf("Passed All Tests");
     else
        cout << "Failed test " << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    int lst1[] = {0,  2, 1, 18, 20};
    int lst2[] = {0,  1, 3, 2, 20};
    int lst3[] = {0,  5, 1, 2, 3};
    if(arg == 1) {
      runtest(lst1, 1, 5);
    }
    if(arg == 2) {
      runtest(lst2,2, 5);
    }
    if(arg == 3) {
      runtest(lst3,1, 5);
    }

    return 0;
}
