#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, f, i, sum;
    scanf("%d\n%d", &n, &f);

    for (i = 0; i < 100; i++) {
        if (((n / 100) * 100 + i) % f == 0) {
            sum = i;
            break;
        }
    }

    if (sum - 10 < 0) printf("0%d", sum);
    else printf("%d", sum);

    return 0;
}