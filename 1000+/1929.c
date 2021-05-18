#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int m, n, i, j;
    int arr[1000000] = { 0 };

    arr[1] = 1;

    for (i = 2; i < 1000001; i++) {

        if (arr[i] == 1) continue;

        for (j = i * i; j < 1000001; j += i) {

            if (j % i == 0) arr[j] = 1;

        }
    }

    scanf("%d %d", &m, &n);

    for (i = m; i <= n; i++) {

        if (arr[i] == 0) printf("%d\n", i);

    }
    return 0;
}