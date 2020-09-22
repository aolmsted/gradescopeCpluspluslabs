#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "sportticket.h"
using namespace std;

class TicketSales 
{ 
public:
  string print_ticket(ShowTicket *inTicket)
  {
    return inTicket->print_ticket();
  }
}; 
