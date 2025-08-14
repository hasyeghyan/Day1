#include <stdio.h>
#include "functions.h"

int stepsToPalindrome(long num) {
    if (num < 0) {
        return -1; 
    }

    const int MAX_STEPS = 1000; 
    int steps = 0;

    while (!isPalindrome(num)) {
        long rev = reverseNumber(num);
        num += rev;
        steps++;

        if (steps > MAX_STEPS) {
            return -1;
        }
    }

    return steps;
}


