#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int h, m, s, t, cnt = 0;
    scanf("%d %d %d\n%d", &h, &m, &s, &t);
    s += t;

    while (s > 59) {
        s -= 60;
        m += 1;
    }

    while (m > 59) {
        m -= 60;
        h += 1;
    }
    if (h > 23) h %= 24;

    printf("%d %d %d", h, m, s);
    return 0;
}