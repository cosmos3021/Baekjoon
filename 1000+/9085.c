#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t, n, i, j, tmp, sum = 0;
    char g;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &n);

        for (j = 0; j < n; j++) {
            scanf("%d", &tmp);
            sum += tmp;
            if (j != n) scanf("%c", &g);
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}