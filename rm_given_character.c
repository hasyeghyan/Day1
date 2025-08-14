#include <stdio.h>

void rm1(char arr[], int size, char c){
    for(int i = 0; i < size; ++i){
        int j = i;
	while(j < size){ 
	     if(arr[j] != c){
               ++j;
               continue;
             }
	
             else {
                int k = j;
                while(k < size - 1){
                     arr[k] = arr[k + 1];
                    ++k;
                }
                --size;
             }

        }
    }
    for(int i = 0; i < size; ++i){
       printf("%c", arr[i]);
    }
}


