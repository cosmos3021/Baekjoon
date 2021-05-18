#include <stdio.h>

int main(void) {
    int n, a, i, sum = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
    }

    printf("%d", sum - n + 1);
    return 0;
}