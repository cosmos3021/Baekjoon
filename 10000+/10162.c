#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 300, b = 60, c = 10, cnt_a = 0, cnt_b = 0, cnt_c = 0, t;
    scanf("%d", &t);
    if (t % 10 != 0) {
        printf("%d", -1);
        return 0;
    }

    while (t - a >= 0) {
        t -= a;
        cnt_a++;
    }

    while (t - b >= 0) {
        t -= b;
        cnt_b++;
    }

    while (t > 0) {
        t -= c;
        cnt_c++;
    }

    printf("%d %d %d", cnt_a, cnt_b, cnt_c);
    return 0;
}