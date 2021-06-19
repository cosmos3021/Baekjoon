#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, t, c, p, i = 1, j = 0, sum;
    scanf("%d %d %d %d", &n, &t, &c, &p);

    while (1) {
        if (i + t > n) break;
        i += t;
        j++;
    }

    sum = j * c * p;
    printf("%d", sum);
}