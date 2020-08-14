#include <iostream>
#include <math.h> 
#include <string>

using namespace std;

int main() {
  int duration;
  string day,start_time;
  float total;
  cout << "Enter the day the call started at: ";
  cin >> day;
  cout << "Enter the time the call started at (hhmm): ";
  cin >> start_time;  
  cout << "Enter the duration of the call (in minutes): ";
  cin >> duration;   
  for(i=0;i<=strlen(day);i++) {
    day[i] = tolower(day[i]);
  } 
  if(day.substr(0,2) = "sat" || day.substr(0,2) = "sun")
    rate = .15;
  else if(start_time >= "0800" && start_time <= "1800") 
    rate = .40;
  else:
    rate = .25;
  total = rate * duration;
  printf("This call will cost $%3.2f ",total);
  return 0
}