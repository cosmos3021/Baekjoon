#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    long long gcd, lcm, k, b, nope = 0, z1, z2;
    scanf("%lld %lld", &gcd, &lcm);
    k = lcm / gcd;

    for (long long a = 1; a * a <= k; a++) {
        if (k % a == 0) {
            b = k / a;
            for (long long i = 2; i <= a; i++) if (a % i == 0 && b % i == 0) nope = 1;
            if (nope == 0) z1 = a, z2 = b;
        }
        nope = 0;
    }

    printf("%lld %lld", z1 * gcd, z2 * gcd);
}