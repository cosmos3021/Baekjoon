#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = 2 * b - a;
    printf("%d", c);
}