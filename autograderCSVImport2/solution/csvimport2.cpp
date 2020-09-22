#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <string.h> 
#include "cpluspluslabs.h"
using namespace std;

void csv_import2(NODE** data, string filename)
{
  string line;
  ifstream myFile(filename);
  
  
  while(std::getline(myFile, line))
    {
      char *str = strdup(line.c_str());
      char *token = strtok(str, ",");
      int col = 0;
      NODE* np;
      np = new NODE();  
      while( token != NULL ) 
      {
          switch(col) {
            case 0: 
              np->firstname = token;
              break;
            case 1: 
              np->lastname = token;  
              break;
            case 2: 
              np->email = token;  
              break;

          }
          col++;
          token = strtok(NULL, ",");
      }
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
      
      free(str);
    }

    myFile.close();

}
