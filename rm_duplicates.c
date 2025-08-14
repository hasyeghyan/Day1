#include <stdio.h>

void rm(int arr[], int size){ 
    for(int i = 0; i < size; ++i){
        int j =  i + 1;
	while(j < size){
	     if(arr[i] != arr[j]){
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
       printf("%d ", arr[i]);
    }
}




