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
    myqueue.enqueue(10);
    myqueue.enqueue(20);
    myqueue.enqueue(30);
    
    if(arg == 1) {
     if(myqueue.a[2] == 30)
        printf("Passed All Tests");
     else
        cout << "Failed queue value test " << '\n';
    }
    if(arg == 2) {
     if(myqueue.a[0] == 10)
        printf("Passed All Tests");
     else
        cout << "Failed earlier queue value test " << '\n';
    }
    if(arg == 3) {
     if(myqueue.rear_value == 2)
        printf("Passed All Tests");
     else
        cout << "Failed queue rear test " << '\n';
    }

    return 0;
}
