#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, i, sum = 0;
    for (i = 0; i < 4; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d\n%d", sum / 60, sum % 60);
    return 0;
}