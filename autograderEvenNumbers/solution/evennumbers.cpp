#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Please enter a positive integer: ";  
  cin >> num;
  for(int x=0; x < num;x++)
    cout << (x + 1)* 2;
  return 0;
}    