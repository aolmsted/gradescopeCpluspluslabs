#include <iostream>
#include <math.h> 
#include <string>

using namespace std;

int main() {
  int day,duration;
  string start_time;
  cout << "Enter the day the call started at: ";
  cin >> day;
  cout << "Enter the time the call started at (hhmm): ";
  cin >> start_time;  
  cout << "Enter the duration of the call (in minutes): ";
  cin >> duration;   
  if( day.lower().startswith("sat") or day.lower().startswith("sun"))
    rate = .15;
elif start_time >= "0800" and start_time <= "1800": 
    rate = .40;
else:
    rate = .25;
total = rate * int(duration)
print("This call will cost ${0:2.2f} ".format(total))