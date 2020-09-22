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
