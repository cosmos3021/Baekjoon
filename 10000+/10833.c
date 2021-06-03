#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int apple, n, student, i, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &student, &apple);
        sum += apple % student;
    }
    printf("%d", sum);
    return 0;
}