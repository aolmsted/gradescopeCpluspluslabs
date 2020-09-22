#include <stdio.h>
#include <stdlib.h>
#include "cpluspluslabs.h"

void add_node_head(NODE** data, string firstname,string lastname, string email)
{  
    NODE* np;
    np = new NODE();  
  
    np->firstname = firstname;  
    np->lastname = lastname;  
    np->email = email;  
    np->next = (*data);
    (*data) = np;
}  
