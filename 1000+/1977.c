#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int n, m, i, jegop, min = 0, max = 0;
    scanf("%d\n%d", &m, &n);

    for (i = sqrt(n); i > 0; i--) {
        jegop = i * i;
        if (n + 1 > jegop && jegop > m - 1) {
            max += jegop;
            min = jegop;
        }
    }

    if (max == 0 || min == 0) {
        printf("%d", -1);
        return 0;
    }

    printf("%d\n%d", max, min);
}