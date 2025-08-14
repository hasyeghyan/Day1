#include <stdio.h>

int* product_of_same_indexes(int arr1[],int arr2[],int size){
     for(int i = 0; i < size; ++i){
       arr1[i] = arr1[i] * arr2[i];
    }
     return arr1;

}



