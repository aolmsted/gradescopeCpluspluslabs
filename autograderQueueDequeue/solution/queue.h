#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
#define MAX 1000
  
class Queue {
  
public:
    int rear_value;
    int a[MAX]; // Maximum size of Queue
  
    Queue() { rear_value = -1; }
    bool enqueue(int x){
     if (rear_value >= (MAX-1)) 
     {
        cout << "Queue Overflow!!!";
        return false;
     }
     else 
     {
        a[++rear_value] = x;
        return true;
      }       
    };
    int dequeue() {
      if(rear_value == -1) return 0;
      else {
        int value = a[0];
        for(int i = 1; i < rear_value; i++)
          a[i-1] = a[i];
        rear_value--;  
        return value;
      }
    
    }
    int front()
    {
      if(rear_value == -1) return 0;
      else return a[0];
    }
    int rear() {
      if(rear_value == -1) return 0;
      else return a[rear_value];
    }
};
