#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    NODE* data = NULL; 
    add_node_head(&data,"aspen","olmsted","aspeno@aol.com");
    add_node_head(&data,"sally","jones","sally@aol.com");
    if(arg == 1) {
      if(data->firstname == "sally")
        printf("Passed All Tests");
      else
        cout << "Failed first node test " << '\n';
      
    }
    if(arg == 2) {
      data = data->next;
      if(data->firstname == "aspen")
        printf("Passed All Tests");
      else
        cout << "Failed 2nd node test " << '\n';
    }
    if(arg == 3) {
      data = data->next;
      if(data->next == NULL)
        printf("Passed All Tests");
      else
        cout << "Failed 3rd node test " << '\n';
    }

    return 0;
}
