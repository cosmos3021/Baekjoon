#include <stdio.h>
#include <math.h>

int main(void) {
    int a, sum = 0, min = 100, i;

    for (i = 0; i < 7; i++) {
        scanf("%d", &a);
        if (a % 2 == 1) {
            sum += a;
            if (a < min) min = a;
        }
    }

    if (sum == 0) {
        printf("%d", -1);
        return 0;
    }

    printf("%d\n%d", sum, min);
    return 0;
}