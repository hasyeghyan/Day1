#include <stdio.h>


int missing(int arr[],int n){
    int sum1 = 0;
    int sum = 0;

    for (int i = 0; i <= n; i++ ) {
         if(i == n)
            sum1 +=i;
         else {
            sum1 += i;
            sum += arr[i];
         }
    }


    return  sum1 - sum;

}


