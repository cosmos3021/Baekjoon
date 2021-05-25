#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int max = 0, maxi, n, i;
    for (i = 1; i <= 9; i++) {
        scanf("%d", &n);
        if (max < n) {
            max = n;
            maxi = i;
        }
    }
    printf("%d\n%d", max, maxi);
    return 0;
}