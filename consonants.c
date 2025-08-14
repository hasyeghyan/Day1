#include <stdio.h>

int vowels_count(char arr[], int size){
     int count = 0;
     for(int i = 0; i < size; ++i){
     if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {

       if(!(arr[i] == 'a' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'e' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'O' || arr[i] == 'I' || arr[i] == 'E' || arr[i] == 'U'))
              ++count;

     }
     }
     return count;
}
