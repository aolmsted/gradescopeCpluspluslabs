#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    Node* data = new_node(10); 
    
    if(arg == 1) {
      if(data->key == 10)
        printf("Passed All Tests");
      else
        cout << "Failed jey test " << '\n';
      
    }
    if(arg == 2) {
      if(data->height == 1)
        printf("Passed All Tests");
      else
        cout << "Failed height test " << '\n';
    }
    if(arg == 3) {
      if(data->left == NULL)
        printf("Passed All Tests");
      else
        cout << "Failed left test " << '\n';
    }

    return 0;
}
