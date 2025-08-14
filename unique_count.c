#include <stdio.h>

void unique(int arr[], int size, int arr1[], int size1){
     for(int i = 0; i < size; ++i){
        ++arr1[arr[i]];
     }    
}


