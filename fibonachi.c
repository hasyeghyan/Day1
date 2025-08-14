#include <stdio.h>

int fib(int n, int arr[], int size){
    if(n >= 0 && n < 2)
       return n;
    if(!arr[n]){
      arr[n] = fib(n - 1, arr, size) + fib(n - 2, arr, size);
    }
    else
      return arr[n];
}


