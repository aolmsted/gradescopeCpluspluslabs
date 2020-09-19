#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;
void swap(int *a, int *b) 
{
    int t = *a;  
    *a = *b;  
    *b = t;  

}

void runtest(int lst[], int elements) {
   selection_sort(lst, elements);
   if(lst[1] > lst[0] && lst[2] > lst[1])
        printf("Passed All Tests");
     else
        cout << "Failed test " << '\n';
}

int main(int argc, char** argv) {
    int arg = atoi(argv[1]);
    int lst1[] = {0, 1, 2, 18, 19, 20, 25};
    int lst2[] = {0, 25, 2, 18, 19, 20, 1};
    int lst3[] = {25, 20, 19, 18, 2, 1, 0};
    if(arg == 1) {
      runtest(lst1, 7);
    }
    if(arg == 2) {
      runtest(lst2,7);
    }
    if(arg == 3) {
      runtest(lst3,7);
    }

    return 0;
}
