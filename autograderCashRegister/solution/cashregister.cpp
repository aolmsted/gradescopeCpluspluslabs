#include <iostream>
#include <math.h> 
#include <string>

using namespace std;

int main() {
  float first,second,lower,higher,discount,total,tax;
  string club;
  cout << "Enter price of the first item: ";
  cin >> first;
  cout << "Enter price of the second item: ";
  cin >> second;  
  cout << "Does customer have a club card? (Y/N): ";
  cin >> club;
  cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
  cin >> tax;
  if(first < second) {
    lower = first;
    higher = second;
  }
  else {        
    lower = second;
    higher = first;
  }        
  if(club.front() == 'y' || club.front() == 'Y')
    discount = (lower/2 + higher) * .1;
  else
    discount = 0;
  printf("Base price = %3.2f ",first + second);
  printf("Price after discounts = %3.2f ",lower/2 + higher - discount);
  total = round((lower/2 + higher - discount) * (1 + tax/100) * 100) / 100;
  printf("Total price = %3.2f ",total);
  return 0;
}    