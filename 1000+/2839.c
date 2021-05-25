#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int sugar, i, sum = 0;
    scanf("%d", &sugar);

    for (i = 0; i < sugar / 5 + 1; i++) {
        if ((sugar - (5 * i)) % 3 == 0) {
            sum = ((sugar - (5 * i)) / 3) + i;
        }
    }
    if (sum == 0) sum = -1;
    printf("%d\n", sum);
    return 0;
}