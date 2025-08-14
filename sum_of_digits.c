#include <stdio.h>

int sum(int n){
    if(!n)
       return 0;
    return sum(n / 10) + (n % 10);
}


