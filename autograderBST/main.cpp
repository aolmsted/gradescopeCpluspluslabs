#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "bst.h"

using namespace std;

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    BST mytree1;
    BST mytree2(10);
    
    if(arg == 1) {
     if(mytree1.data == 0)
        printf("Passed All Tests");
     else
        cout << "Failed default constructor test " << '\n';
    }
    if(arg == 2) {
     if(mytree2.data == 10)
        printf("Passed All Tests");
     else
        cout << "Failed one arg constructor test " << '\n';
    }
    if(arg == 3) {
     if(mytree1.left == NULL)
        printf("Passed All Tests");
     else
        cout << "Failed children test" << '\n';
    }

    return 0;
}
