#include <stdio.h>
#include <stdlib.h>
#include "cpluspluslabs.h"

void merge_sort(int arr[], int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        merge_sort(arr, l, m); 
        merge_sort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
