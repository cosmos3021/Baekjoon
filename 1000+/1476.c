#include <stdio.h>

int main(void) {
    int e = 0, s = 0, m = 0, a, b, c, cnt = 1;
    scanf("%d %d %d", &a, &b, &c);

    while (1) {
        e++, s++, m++;
        if (e > 15) e = 1;
        if (s > 28) s = 1;
        if (m > 19) m = 1;
        if (e == a && s == b && m == c) break;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}