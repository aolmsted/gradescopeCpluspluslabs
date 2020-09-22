#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    Node *root = insertnb(NULL, 30);  
    root = insertnb(root, 20);  
    root = insertnb(root, 10);
    root = right_rotate(root);
    
    
    if(arg == 1) {
      if(root->key == 20)
        printf("Passed All Tests");
      else
        cout << "Failed key test " << '\n';
      
    }
    if(arg == 2) {
      if(root->height == 2)
        printf("Passed All Tests");
      else
        cout << "Failed height test " << '\n';
    }
    if(arg == 3) {
      if(root->left != NULL)
        printf("Passed All Tests");
      else
        cout << "Failed left test " << '\n';
    }

    return 0;
}
