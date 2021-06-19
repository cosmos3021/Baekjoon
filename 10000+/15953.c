#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ooo(int n) {
    if (n == 1) return 5000000;
    if (2 <= n && n <= 3) return 3000000;
    if (4 <= n && n <= 6) return 2000000;
    if (7 <= n && n <= 10) return 500000;
    if (11 <= n && n <= 15) return 300000;
    if (16 <= n && n <= 21) return 100000;
    if (21 < n || n == 0) return 0;
}

int ttt(int n) {
    if (n == 1) return 5120000;
    if (2 <= n && n <= 3) return 2560000;
    if (4 <= n && n <= 7) return 1280000;
    if (8 <= n && n <= 15) return 640000;
    if (16 <= n && n <= 31) return 320000;
    if (31 < n || n == 0) return 0;
}

int main(void) {
    int n, one, two, i, one_one, two_two;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &one, &two);
        one_one = ooo(one);
        two_two = ttt(two);
        printf("%d\n", one_one + two_two);
    }
    return 0;
}