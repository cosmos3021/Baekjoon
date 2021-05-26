#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k = 0, h2, m2, s2;

int cal(int a, int b) {
    int c;

    if (k == 1) {
        b--;
        k--;
    }

    c = b - a;

    if (c < 0) {
        c += 60;
        k++;
    }

    return c;
}

int main(void) {
    int h, m, s, h1, m1, s1, h2 = 0, m2 = 0, s2 = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d %d %d", &h, &m, &s, &h1, &m1, &s1);

        s = cal(s, s1);
        m = cal(m, m1);
        h = cal(h, h1);

        printf("%d %d %d\n", h, m, s);
    }
}