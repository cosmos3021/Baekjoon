#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, i, sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", sum);
    return 0;
}