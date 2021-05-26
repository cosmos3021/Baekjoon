#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t, n, i, k = 0;
    scanf("%d", &t);
    long long P[103] = { 1, 0, 1, 1, 1, };

    while (k < t) {
        scanf("%d", &n);
        for (i = 5; i < n + 2; i++) {
            P[i] = P[i - 5] + P[i - 1];
        }
        printf("%lld\n", P[n + 1]);
        k++;
    }

    return 0;
}