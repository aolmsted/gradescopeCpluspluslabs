#include <iostream>
#include <string>
using namespace std;

string remainingwords(string s){
  int i = s.find(" ");
  return s.substr(i+1);
}
