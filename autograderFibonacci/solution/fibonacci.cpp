#include <iostream>
#include <math.h> 
using namespace std;

int main() {
  int num,f,s,fib;
  cout << "Please enter a positive integer greater than 1: ";
  cin >> num;
  f = 1;
  s = 1;
  fib = 2;
  printf("1\n");
  printf("1\n");
  for(int x=2;x<num;x++)
  {
    fib = f + s;
    f = s;
    s = fib;
    cout << fib;
   } 
  return 0;
}  