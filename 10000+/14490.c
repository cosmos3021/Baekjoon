#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int swap(int a, int b) {
    int tmp = b;
    b = a;
    a = tmp;
    return a, b;
}

int main(void) {
    int n, m, k;
    scanf("%d:%d", &n, &m);

    if (m < n) swap(n, m);
    k = gcd(n, m);
    n /= k;
    m /= k;

    printf("%d:%d", n, m);
    return 0;
}