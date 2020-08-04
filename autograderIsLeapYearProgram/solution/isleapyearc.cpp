#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Error: Insufficient arguments.\n");
        return -1;
    }
    int year = atoi(argv[1]);
    if(!(year % 4)  && ((year % 100) || !(year % 400)))
      printf("%d was a leap year",year);
    else  
      printf("%d was not a leap year",year);
    
}

