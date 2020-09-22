#include <stdio.h>
#include <stdlib.h>
#include "cpluspluslabs.h"

Node* new_node(int key) 
{
    Node* node = new Node(); 
    node->key = key;  
    node->left = NULL;  
    node->right = NULL;  
    node->height = 1; // new node is initially 
                      // added at leaf  
    return(node);  
}  

int max(int a, int b)  
{  
    return (a > b)? a : b;  
}    
// A utility function to get the  
// height of the tree  
int height(Node *N)  
{  
    if (N == NULL)  
        return 0;  
    return N->height;  
}  

Node* insertnb(Node* node, int key)
{
    if (node == NULL)  
        return(new_node(key));  
  
    if (key < node->key)  
        node->left = insertnb(node->left, key);  
    else if (key > node->key)  
        node->right = insertnb(node->right, key);  
    else // Equal keys are not allowed in BST  
        return node;  
  
    /* 2. Update height of this ancestor node */
    node->height = 1 + max(height(node->left),  
                        height(node->right));  
  
}

Node *left_rotate(Node *x)  
{  
    Node *y = x->right;  
    Node *T2 = y->left;  
  
    // Perform rotation  
    y->left = x;  
    x->right = T2;  
  
    // Update heights  
    x->height = max(height(x->left),     
                    height(x->right)) + 1;  
    y->height = max(height(y->left),  
                    height(y->right)) + 1;  
  
    // Return new root  
    return y;  
}  

int get_balance(Node *x)
{
    if (x == NULL)  
        return 0;  
    return height(x->left) - height(x->right);  
}