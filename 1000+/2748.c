#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long long int n, i, one = 0, two = 1, sum = 0;
    scanf("%lld", &n);

    for (i = 0; i < n - 1; i++) {
        sum = one + two;
        one = two;
        two = sum;
    }

    if (n == 1) sum = 1;
    printf("%lld", sum);
    return 0;
}