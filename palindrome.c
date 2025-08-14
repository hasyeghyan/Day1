#include <stdio.h>

int isPalindrome(long num) {
    long original = num;
    long reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return (original == reversed);
}



