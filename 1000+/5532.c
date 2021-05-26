#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c, d, l, i;
    scanf("%d\n%d\n%d\n%d\n%d", &l, &a, &b, &c, &d);
    for (i = 0; i < l; i++) {
        a -= c;
        b -= d;
        if (a <= 0 && b <= 0) break;
    }
    printf("%d", l - i - 1);
    return 0;
}