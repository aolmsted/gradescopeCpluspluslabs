#include <stdio.h>
#include <stdlib.h>
#include "cpluspluslabs.h"

void add_node_tail(NODE** data, string firstname,string lastname, string email)
{  
    NODE* np;
    np = new NODE();  
  
    np->firstname = firstname;  
    np->lastname = lastname;  
    np->email = email;  
    np->next = NULL;

    if((*data) == NULL)
    {  
      (*data) = np;
    }
    else
    {  
      NODE *tail = (*data);
      while (tail->next != NULL) { 
          tail = tail->next; 
      } 
      tail->next = np;
    } 
}  
