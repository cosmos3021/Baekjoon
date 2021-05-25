#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, i, j, avg = 0, tmp;
    int cen[5];

    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        avg += n;
        cen[i] = n;
    }

    for (i = 0; i < 5; i++) {
        for (j = i; j < 5; j++) {
            if (cen[i] > cen[j]) {
                tmp = cen[i];
                cen[i] = cen[j];
                cen[j] = tmp;
            }
        }
    }

    avg /= 5;

    printf("%d\n%d", avg, cen[2]);
    return 0;
}