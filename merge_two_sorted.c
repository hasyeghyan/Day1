#include <stdio.h>

int* merge_sorted(int arr[], int arr1[], int size,int arr2[]){
   int i = 0;
   int j = 0;
   int k = 0;
        while  ((i < size) && (j < size)){
                if(arr[i] <= arr1[j]){
                       arr2[k++] = arr[i++];
                }
                else{
                    arr2[k++] = arr1[j++];
                }
       }

        while (j < size)
                  arr2[k++] = arr1[j++] ;
        while(i < size)
                  arr2[k++] = arr[j++];
      
	return arr2;
}



  
