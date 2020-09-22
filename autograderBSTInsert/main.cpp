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
    mytree1.insert(5);
    mytree2.insert(5);
    
    if(arg == 1) {
     if(mytree1.left == NULL)
        printf("Passed All Tests");
     else
        cout << "Failed empty child test" << '\n';
    }
    if(arg == 2) {
     if(mytree1.right != NULL)
        printf("Passed All Tests");
     else
        cout << "Failed right child test " << '\n';
    }
    if(arg == 3) {
     if(mytree2.left != NULL)
        printf("Passed All Tests");
     else
        cout << "Failed left child test" << '\n';
    }

    return 0;
}
