#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}
int main(void) {
    int n, m, sum, gcd;
    scanf("%d %d", &n, &m);
    gcd = GCD(n, m);
    sum = m - gcd;
    printf("%d", sum);

    return 0;
}