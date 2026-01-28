#include <stdio.h>

int main()
{
    int num[100];

    for(int i = 0; i < 100; i++) {
        num[i] = (num[i-1]+1) + 7;
    }

    for(int i = 0; i < 100; i++) {
        printf("index %d: %d\n", i, num[i]);
    }
}