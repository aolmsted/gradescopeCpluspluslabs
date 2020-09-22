#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "showtickets.h"

using namespace std;
int case_insensitive_match(string s1, string s2) {
   //convert s1 and s2 into lower case strings
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   if(s1.compare(s2) == 0)
      return 1; //The strings are same
   return 0; //not matched
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    ShowTickets mytickets;
    mytickets.sell_seat("AA","102");
    
    if(arg == 1) {
     if(!mytickets.is_sold("AA","101"))
        printf("Passed All Tests");
     else
        cout << "Failed sold test " << '\n';
    }
    if(arg == 2) {
     if(mytickets.is_sold("AA","102"))
        printf("Passed All Tests");
     else
        cout << "Failed sale test " << '\n';
    }
    if(arg == 3) {
      string x = mytickets.print_ticket("AA","102"); 
       if(case_insensitive_match(x,"AA 102 sold") == 1)
          printf("Passed All Tests");
       else
          cout << "Failed print test " << x << '\n';
    }

    return 0;
}
