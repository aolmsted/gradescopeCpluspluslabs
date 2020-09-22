#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

class ShowTicket
{ 
private:
  string row;
  string seat;
  bool sold;
public:
  ShowTicket(string inRow, string inSeat) 
  {
    row = inRow;
    seat = inSeat;
    sold = false;
  }
  
  bool is_sold()
  {
    return sold;
  }
  
  void sell_seat()
  {
    sold = true;
  }

  string print_ticket()
  {
    if(sold)
      return row + " " + seat + " sold";
    else
      return row + " " + seat + " available";
  }
}; 
