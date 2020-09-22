#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <string.h> 

using namespace std;

void csv_import(string data[10][10], int columns, int *records, string filename)
{
  string line;
  ifstream myFile(filename);
  *records = 0;
  while(std::getline(myFile, line))
    {
      int row = (*records)++;
      char *str = strdup(line.c_str());
      char *token = strtok(str, ",");
   
      int col = 0;
      while( token != NULL ) 
      {
          data[row][col++] = token;
          token = strtok(NULL, ",");
      }
      free(str);
    }

    myFile.close();

}
