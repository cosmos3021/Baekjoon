#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, d, sum;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a - b - c + d;
    if (sum < 0) sum *= -1;
    printf("%d", sum);
    return 0;
}