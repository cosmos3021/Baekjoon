#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int i, x, ja = 1, mo = 1, hang = 0, lastx = 0;
    scanf("%d", &x);
    for (i = 1; i < x; i++) {
        x -= i;
        if (x < 0) break;
        lastx = x;
    }
    hang = i;

    if (hang % 2 == 0) {
        mo = hang;
        for (i = 1; i < lastx; i++) {
            ja++;
            mo--;
        }
    }

    if (hang % 2 == 1) {
        ja = hang;
        for (i = 1; i < lastx; i++) {
            ja--;
            mo++;
        }
    }
    printf("%d/%d", ja, mo);
    return 0;
}