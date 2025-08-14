#include <stdio.h>

int minBitFlips(int start, int goal) {
    int res = start ^ goal;
    int count = 0;
    for(int i = 0; i < 31; i++){
        if(res & (1 << i))
           count++;
    }
    return count;
}

