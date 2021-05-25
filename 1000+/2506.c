#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, i, a, combo = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a == 1) {
            combo++;
            sum += combo;
        }
        else if (a == 0) {
            combo = 0;
        }
    }
    printf("%d", sum);
    return 0;
}