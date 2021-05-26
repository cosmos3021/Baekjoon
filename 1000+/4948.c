#include <stdio.h>
#include <math.h>

int main(void) {
    int i, j, n, cnt = 0;
    int arr[246912] = { 1, 1, 0, };

    for (i = 2; i < 246913; i++) {
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                arr[i] = 1;
                break;
            }
        }
    }

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        for (i = n + 1; i <= 2 * n; i++) {
            if (arr[i] == 0) cnt++;
        }

        printf("%d\n", cnt);
        cnt = 0;
    }

    return 0;
}