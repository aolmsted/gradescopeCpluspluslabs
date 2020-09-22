#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "ticketsales.h"

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
    TicketSales ts;
    ShowTicket myticket1("AA","101");
    SportTicket myticket2("AA","102");
    SportTicket myticket3("AA","103");
    myticket2.sell_seat();
    myticket2.sell_beer();
    
    if(arg == 1) {
      string x = ts.print_ticket(&myticket1); 
       if(case_insensitive_match(x,"AA 101 available") == 1)
          printf("Passed All Tests");
       else
          cout << "Failed print test " << x << '\n';
    }
    if(arg == 2) {
      string x = ts.print_ticket(&myticket2); 
       if(case_insensitive_match(x,"AA 102 sold beer") == 1)
          printf("Passed All Tests");
       else
          cout << "Failed print test " << x << '\n';
    }
    if(arg == 3) {
      string x = ts.print_ticket(&myticket3); 
       if(case_insensitive_match(x,"AA 103 available") == 1)
          printf("Passed All Tests");
       else
          cout << "Failed print test " << x << '\n';
    }

    return 0;
}
