#include <stdio.h>

int main(void) {
    int i, j, n, a, b, sum = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);

        for (j = 0; j < b; j++) {
            sum *= a;
            while (sum - 10 > 0) sum %= 10;
        }

        if (sum == 0) printf("%d\n", 10);
        else printf("%d\n", sum);

        sum = 1;
    }
    return 0;
}