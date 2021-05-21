#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int arr[300][300] = { 0 };
    int n, m, k, i, j, x, y, sum;
    scanf("%d %d", &n, &m);

    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
            scanf("%d", &arr[a][b]);
        }
    }

    scanf("%d", &k);
    for (int a = 0; a < k; a++) {
        sum = 0;
        scanf("%d %d %d %d", &i, &j, &x, &y);

        for (int b = i - 1; b < x; b++) {
            for (int c = j - 1; c < y; c++) {
                sum += arr[b][c];
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}