#include <stdio.h>

void reverse_array(int arr[], int size){
    int temp = 0;
    int *beginning = arr;
    int *end = arr + (size - 1);

    while(beginning < end){
          temp = *beginning;
          *beginning = *end;
          *end =  temp;
          ++beginning;
          --end;
    }

}


