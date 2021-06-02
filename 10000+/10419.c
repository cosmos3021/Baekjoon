#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int t, d;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &d);
        for (int j = 1; j < 100; j++) {
            if (pow(j, 2) + j > d) {
                printf("%d\n", j - 1);
                break;
            }
        }
    }
    return 0;
}