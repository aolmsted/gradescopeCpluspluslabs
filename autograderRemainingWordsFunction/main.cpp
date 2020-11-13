#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;

void runtest(string s, string answer) {
   if(remainingwords(s) == answer)
        printf("Passed All Tests");
     else
        cout << "Failed test on string: " << s << " result from function - " << remainingwords(s) << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    if(arg == 1) {
      runtest("The quick brown fox","quick brown fox");
    }
    if(arg == 2) {
      runtest("quick brown fox","brown fox");
    }
    if(arg == 3) {
      runtest("slow puppies eat alot","puppies eat alot");
    }

    return 0;
}
