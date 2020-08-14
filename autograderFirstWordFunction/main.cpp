#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;

void runtest(string s, string answer) {
   if(firstword(s) == answer)
        printf("Passed All Tests");
     else
        cout << "Failed test on string: " << s << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    if(arg == 1) {
      runtest("The quick brown fox","The");
    }
    if(arg == 2) {
      runtest("quick brown fox","quick");
    }
    if(arg == 3) {
      runtest("slow puppies eat alot","slow");
    }

    return 0;
}
