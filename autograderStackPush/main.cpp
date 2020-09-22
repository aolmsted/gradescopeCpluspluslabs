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
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    
    if(arg == 1) {
     if(mystack.a[2] == 30)
        printf("Passed All Tests");
     else
        cout << "Failed stack value test " << '\n';
    }
    if(arg == 2) {
     if(mystack.a[0] == 10)
        printf("Passed All Tests");
     else
        cout << "Failed lower stack value test " << '\n';
    }
    if(arg == 3) {
     if(mystack.top == 2)
        printf("Passed All Tests");
     else
        cout << "Failed stack top test " << '\n';
    }

    return 0;
}
