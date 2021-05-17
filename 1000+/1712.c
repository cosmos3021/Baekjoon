#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, k;
    scanf("%d %d %d", &a, &b, &c);
    k = a / (c - b) + 1;
    if (b >= c) k = -1;
    printf("%d", k);
    return 0;
}