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
    int pop()
    {
      if(top == -1)
        return 0;
      else
        return a[top--];  
    }

    int peek()
    {
      if(top == -1)
        return 0;
      else
        return a[top];  
    }
    bool isEmpty();
};
