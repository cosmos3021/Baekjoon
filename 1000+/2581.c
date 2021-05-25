#include <stdio.h>

int main(void) {
    int sum = 0, min = 0, m, n, i, j, musi = 0;
    scanf("%d\n%d", &m, &n);

    for (i = n; i >= m; i--) {
        musi = 0;
        if (i == 1) continue;

        for (j = 2; j <= i; j++) {
            if (i % j == 0 && i != j) musi = 1;
        }

        if (musi == 0) {
            sum += i;
            min = i;
        }
    }

    if (sum == 0) printf("%d\n", -1);
    else printf("%d\n%d\n", sum, min);
    return 0;
}