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
