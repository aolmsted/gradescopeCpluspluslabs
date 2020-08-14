#include <iostream>
#include <math.h> 
#include <string>

using namespace std;

int main() {
  string instr;
  int mid;
  cout << "Enter an odd length string: ";
  std::getline(std::cin,instr);
  mid = instr.length() / 2;
  cout << "Middle character: " << instr.substr(mid,1) << '\n';
  cout << "First half: " << instr.substr(0,mid) << '\n';
  cout << "Second half: " << instr.substr(mid+1,mid) << '\n';
  return 0;
}  