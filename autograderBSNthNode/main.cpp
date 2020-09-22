#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "bst.h"

using namespace std;

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    BST mytree(10);
    mytree.insert(5);
    mytree.insert(1);
    mytree.insert(2);
    mytree.insert(12);
    mytree.insert(11);
    int n;
    if(arg == 1) {
     if(mytree.nth_node(6) == 12)
        printf("Passed All Tests");
     else
        cout << "Failed navigation test" << '\n';
    }
    if(arg == 2) {
     if(mytree.nth_node(1) == 1)
        printf("Passed All Tests");
     else
        cout << "Failed navigation test" << '\n';
    }
    if(arg == 3) {
     if(mytree.nth_node(4) == 10)
        printf("Passed All Tests");
     else
        cout << "Failed navigation test" << '\n';
    }

    return 0;
}
