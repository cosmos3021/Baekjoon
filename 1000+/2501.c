#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, k, i, cnt = 0, sum;
    int arr[10000] = { 0 };
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[cnt] = i;
            cnt++;
        }
    }

    sum = arr[k - 1];
    printf("%d", sum);
    return 0;
}