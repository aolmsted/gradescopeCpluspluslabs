#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <string.h> 

using namespace std;

void csv_export(string data[10][10], int rows, int columns, string filename)
{
  ofstream myfile;
  myfile.open (filename);
  for(int i=0; i< rows; i++)
  {
    for(int j=0;j<columns; j++)
    {
      myfile << data[i][j];
      if(j < columns - 1)
        myfile << ",";
        
    }  
    myfile << "\n";
 
  }
  myfile.close();

}
