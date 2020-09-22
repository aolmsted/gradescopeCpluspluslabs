#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;


int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    string data[10][10];
    data[0][0] = "Aspen";
    data[0][1] = "Olmsted";
    data[0][2] = "aspeno@nyu.edu";
    data[1][0] = "Fred";
    data[1][1] = "Flinstone";
    data[1][2] = "fred@aol.com";
    int records;
    csv_export(data,2,3,"customers.csv");
    data[0][1] = "";
    data[1][0] = "";
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
