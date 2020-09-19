#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cpluspluslabs.h"

using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void runtest(int lst[], int elements) {
   merge_sort(lst, 0, elements -1);
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
