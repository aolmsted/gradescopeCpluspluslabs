#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    Node *root = insertnb(NULL, 10);  
    
    
    if(arg == 1) {
      if(get_balance(NULL) == 0)
        printf("Passed All Tests");
      else
        cout << "Failed NULL Test " << '\n';
      
    }
    if(arg == 2) {
      if(get_balance(NULL) == 0)
        printf("Passed All Tests");
      else
        cout << "Failed Just Root Test " << '\n';
    }
    if(arg == 3) {
      root = insertnb(root, 20);  
      root = insertnb(root, 30);
      int x = get_balance(root);
      if(x == -2)
        printf("Passed All Tests");
      else
        cout << "Failed Full Test - returned: " << x << '\n';
    }

    return 0;
}
