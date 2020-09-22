#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "showticket.h"
using namespace std;

class SportTicket : public ShowTicket
{ 
private:
  bool beersold;
public:
  SportTicket(string inRow, string inSeat) : ShowTicket(inRow, inSeat)
  {
    beersold = false;
  }
  
  bool beer_sold()
  {
    return beersold;
  }
  
  void sell_beer()
  {
    beersold = true;
  }

  string print_ticket()
  {
    if(this->is_sold())
    {
      if(beersold)
        return row + " " + seat + " sold" + " beer";
      else
        return row + " " + seat + " sold" + " nobeer";
    }    
    else
      return row + " " + seat + " available";
  }
}; 
