#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t, a, i, j, tmp;
    long long sum = 0;
    int arr[51] = { 0 };
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &a);
        arr[i] = a;
    }

    for (i = 0; i < t - 1; i++) {
        for (j = 0; j < t - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    sum = arr[t - 1] * arr[0];
    printf("%lld", sum);
    return 0;
}