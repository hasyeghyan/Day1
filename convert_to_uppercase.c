#include <stdio.h>

void uppercase(char arr[], int size){
     for(int i = 0; i < size; ++i){
       if (arr[i] >= 'a' && arr[i] <= 'z'){
           arr[i] = arr[i] - 32;
       }
    }


}



