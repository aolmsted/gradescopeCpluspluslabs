#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

#define MAX 1000
  
class Stack {
  
public:
    int top;
    int a[MAX]; // Maximum size of Stack
  
    Stack() { top = -1; }
    bool push(int x)
    {
     if (top >= (MAX-1)) 
     {
        cout << "Stack Overflow!!!";
        return false;
     }
     else 
     {
        a[++top] = x;
        return true;
      }       
    };
    int pop();
    int peek();
    bool isEmpty();
};
