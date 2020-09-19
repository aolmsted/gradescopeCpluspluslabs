#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;

void runtest(int search, int lst[], int elements, int answer) {
   if(linear_search(search, lst, elements) == answer)
        printf("Passed All Tests");
     else
        cout << "Failed test on int: " << answer << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    int lst[] = {19, 2, 20, 1, 0, 18};
    if(arg == 1) {
      runtest(20, lst, 6, 3);
    }
    if(arg == 2) {
      runtest(19, lst,6, 1);
    }
    if(arg == 3) {
      runtest(-1, lst,6, 6);
    }

    return 0;
}
