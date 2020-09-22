#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    Node *root = insert(NULL, 10);  
    
    
    if(arg == 1) {
      root = insert(root, 20);  
      if(get_balance(root) == -1)
        printf("Passed All Tests");
      else
        cout << "Failed NULL Test " << '\n';
      
    }
    if(arg == 2) {
      root = insert(root, 20);  
      root = insert(root, 30);
      if(get_balance(root) == 0)
        printf("Passed All Tests");
      else
        cout << "Failed Balance Test " << '\n';
    }
    if(arg == 3) {
      root = insert(root, 1);  
      root = insert(root, 2);
      if(root->key == 2)
        printf("Passed All Tests");
      else
        cout << "Failed Key Test" << '\n';
    }

    return 0;
}
