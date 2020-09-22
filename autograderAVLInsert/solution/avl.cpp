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

Node *right_rotate(Node *y)  
{  
    Node *x = y->left;  
    Node *T2 = x->right;  
  
    // Perform rotation  
    x->right = y;  
    y->left = T2;  
  
    // Update heights  
    y->height = max(height(y->left), 
                    height(y->right)) + 1;  
    x->height = max(height(x->left), 
                    height(x->right)) + 1;  
  
    // Return new root  
    return x;  
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

Node* insert(Node* node, int key)  
{  
    /* 1. Perform the normal BST insertion */
    if (node == NULL)  
        return(new_node(key));  
  
    if (key < node->key)  
        node->left = insert(node->left, key);  
    else if (key > node->key)  
        node->right = insert(node->right, key);  
    else // Equal keys are not allowed in BST  
        return node;  
  
    /* 2. Update height of this ancestor node */
    node->height = 1 + max(height(node->left),  
                        height(node->right));  
  
    /* 3. Get the balance factor of this ancestor  
        node to check whether this node became  
        unbalanced */
    int balance = get_balance(node);  
  
    // If this node becomes unbalanced, then  
    // there are 4 cases  
  
    // Left Left Case  
    if (balance > 1 && key < node->left->key)  
        return right_rotate(node);  
  
    // Right Right Case  
    if (balance < -1 && key > node->right->key)  
        return left_rotate(node);  
  
    // Left Right Case  
    if (balance > 1 && key > node->left->key)  
    {  
        node->left = left_rotate(node->left);  
        return right_rotate(node);  
    }  
  
    // Right Left Case  
    if (balance < -1 && key < node->right->key)  
    {  
        node->right = right_rotate(node->right);  
        return left_rotate(node);  
    }  
  
    /* return the (unchanged) node pointer */
    return node;  
}  