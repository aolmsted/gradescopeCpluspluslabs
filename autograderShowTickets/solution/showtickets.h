#include <stdio.h>
#include <stdlib.h>
#include <string>
#define MAX_SEATS 10
using namespace std;

class ShowTickets
{ 
private:
  int usedseats = 0;
  string rows[MAX_SEATS];
  string seats[MAX_SEATS];
  
public:

  bool is_sold(string row, string seat)
  {
    for(int i = 0; i < usedseats; i++)
      if(rows[i] == row && seats[i] == seat)
         return true;      
    
    return false;
  }
  
  void sell_seat(string row, string seat)
  {
    if(usedseats < MAX_SEATS - 1) 
    {
      rows[usedseats] = row;
      seats[usedseats++] = seat;
    }  
  }

  string print_ticket(string row, string seat)
  {
    for(int i = 0; i < usedseats; i++)
      if(rows[i] == row && seats[i] == seat)
        return row + " " + seat + " sold";
    return row + " " + seat + " available";
  }
}; 
