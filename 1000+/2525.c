#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, temp;
    scanf("%d %d\n%d", &a, &b, &c);

    int h = a, m = b + c;

    if (m >= 60) {
        temp = m;
        m = temp % 60;
        h += temp / 60;
    }

    if (h >= 24) {
        temp = h;
        h = temp % 24;
    }

    printf("%d %d", h, m);
    return 0;
}