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
     void inorder(BST *root, int *n, int *value) 
     {
         if(!root) 
         { 
           return; 
         } 
         inorder(root->left, n, value); 
         if((*n) != 0) 
         { 
           (*value) = root->data; 
           (*n) = (*n) - 1;
         }
         inorder(root->right, n, value); 
     }
     
     int nth_node(int n) 
     {
        int temp = n;
        int value;
        inorder(this, &temp, &value);
        return value;
     }
};

