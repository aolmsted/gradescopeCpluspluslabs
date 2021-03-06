#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "sportticket.h"

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
    SportTicket myticket1("AA","101");
    SportTicket myticket2("AA","102");
    myticket2.sell_seat();
    myticket2.sell_beer();
    
    if(arg == 1) {
     if(!myticket1.beer_sold())
        printf("Passed All Tests");
     else
        cout << "Failed beer sold test " << '\n';
    }
    if(arg == 2) {
     if(myticket2.beer_sold())
        printf("Passed All Tests");
     else
        cout << "Failed beer sale test " << '\n';
    }
    if(arg == 3) {
      string x = myticket2.print_ticket(); 
       if(case_insensitive_match(x,"AA 102 sold beer") == 1)
          printf("Passed All Tests");
       else
          cout << "Failed print test " << x << '\n';
    }

    return 0;
}
