#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    int records;
    NODE* data = NULL; 
    
    
    csv_import2(&data,"customers.csv");
    
    if(arg == 1) {
      if(data->firstname == "Aspen")
          printf("Passed All Tests");
       else
          cout << "Failed 1st Column 1st row" << data->firstname << '\n';
    }
    if(arg == 2) {
      if(data->lastname == "Olmsted")
          printf("Passed All Tests");
       else
          cout << "Failed 2nd Column" << data->lastname << '\n';

    }
    if(arg == 3) {
      data = data->next;
      if(data->firstname == "Fred")
          printf("Passed All Tests");
       else
          cout << "Failed 1st Column 2nd row" << data->firstname << '\n';
    }

    return 0;
}
