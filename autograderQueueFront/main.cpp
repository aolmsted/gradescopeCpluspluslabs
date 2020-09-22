#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "queue.h"

using namespace std;

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    Queue myqueue;
    myqueue.a[++rear_value] = 10;
    myqueue.a[++rear_value] = 20;
    myqueue.a[++rear_value] = 30;
    
    if(arg == 1) {
     if(myqueue.front() == 10)
        printf("Passed All Tests");
     else
        cout << "Failed queue front test " << '\n';
    }
    if(arg == 2) {
     if(myqueue.a[0] == 10)
        printf("Passed All Tests");
     else
        cout << "Failed queue value test " << '\n';
    }
    if(arg == 3) {
     if(myqueue.rear_value == 2)
        printf("Passed All Tests");
     else
        cout << "Failed queue rear test " << '\n';
    }

    return 0;
}
