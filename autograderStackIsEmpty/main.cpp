#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    Stack mystack;
    
    if(arg == 1) {
     if(mystack.isEmpty() == true)
        printf("Passed All Tests");
     else
        cout << "Failed empty stack test " << '\n';
    }
    if(arg == 2) {
      mystack.a[++mystack.top] = 10;
      mystack.a[++mystack.top] = 20;
      mystack.a[++mystack.top] = 30;
     if(mystack.isEmpty() == false)
        printf("Passed All Tests");
     else
        cout << "Failed not empty test " << '\n';
    }
    if(arg == 3) {
      mystack.a[++mystack.top] = 10;
     if(mystack.isEmpty() == false)
        printf("Passed All Tests");
     else
        cout << "Failed not empty test " << '\n';
    }

    return 0;
}
