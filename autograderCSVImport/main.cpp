#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    string data[10][10];
    int records;
    csv_import(data,3,&records,"customers.csv");
    
    if(arg == 1) {
       if(records == 2)
          printf("Passed All Tests");
       else
          cout << "Failed record count " << records << '\n';
    }
    if(arg == 2) {
       if(data[0][1] == "Olmsted")
          printf("Passed All Tests");
       else
          cout << "Failed 2nd Column" << data[0][1] << '\n';

    }
    if(arg == 3) {
       if(data[1][0] == "Fred")
          printf("Passed All Tests");
       else
          cout << "Failed 1st Column 2nd row" << data[1][0] << '\n';
    }

    return 0;
}
