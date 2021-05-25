#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, v;
    int k;
    scanf("%ld %ld %ld", &a, &b, &v);
    k = ceil((v - a) / (a - b)) + 1;
    printf("%d", k);
    return 0;
}