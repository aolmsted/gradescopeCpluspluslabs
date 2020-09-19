#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;

void runtest(int lst[], int element1, int element2) {
   int x = lst[element1];
   swap(&lst[element1], &lst[element2]);
   if(lst[element2] == x)
        printf("Passed All Tests");
     else
        cout << "Failed test on swap" << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    int lst[] = {0, 1, 2, 18, 19, 20, 25};
    if(arg == 1) {
      runtest(lst, 6, 2);
    }
    if(arg == 2) {
      runtest(lst,6, 3);
    }
    if(arg == 3) {
      runtest(lst,6, 0);
    }

    return 0;
}
