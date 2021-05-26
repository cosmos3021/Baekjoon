#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, sang, max, min, res;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        max = 1, min = 100;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &sang);
            if (sang > max) max = sang;
            if (sang < min) min = sang;
        }
        res = 2 * (max - min);
        printf("%d\n", res);
    }
    return 0;
}