#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, chicken, sum;
    scanf("%d %d", &a, &b);
    scanf("%d", &chicken);
    if (a + b - 2 * chicken >= 0) sum = a + b - 2 * chicken;
    else sum = a + b;
    printf("%d\n", sum);
}