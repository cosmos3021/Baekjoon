#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int m, n, res;
    scanf("%d %d", &m, &n);
    res = m * n - 1;
    printf("%d", res);
    return 0;
}