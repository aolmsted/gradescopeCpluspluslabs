#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class BST
{
  public:
    int data;
    BST *left, *right;

     BST() { data = 0;left = right = NULL;}
     BST(int x) { data = x;left = right = NULL;}
     void insert(int value)
     {
      
        // Insert data. 
        if(value > data) 
        { 
            if(right == NULL)
              right = new BST(value);
            else  
              right->insert(value); 
        } 
        else
        { 
            if(left== NULL)
              left = new BST(value);
            else  
              left->insert(value); 
        } 
          
     } 
     
     int nth_node(int n);
};

