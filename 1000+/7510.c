#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int bit, na1, na2;

int contrast(int a, int b, int c) {
    if (a > b) bit = a, na1 = b, na2 = c;
    else bit = b, na1 = a, na2 = c;
    if (c > bit) bit = c, na1 = a, na2 = b;
}

int main(void) {
    int n, a, b, c;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        contrast(a, b, c);

        printf("Scenario #%d:\n", i);
        if (pow(bit, 2) == pow(na1, 2) + pow(na2, 2)) printf("yes\n");
        else printf("no\n");

        if (i != n) printf("\n");
    }
    return 0;
}