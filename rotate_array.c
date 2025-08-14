#include <stdio.h>

void rotate_array(int arr[],int size, int k){
     if(k >= size)
       k %= size;
    
     for(int i = 0; i < k; ++i){
       int temp = arr[size - 1];
       for(int k = size - 1; k > 0; --k){
          arr[k] = arr[k - 1];
       }
       arr[0] = temp;
    }
}




