#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int i, j, sum = 0, max_i, max_sum = 0, point;

    for (i = 1; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &point);
            sum += point;
        }

        if (sum > max_sum) {
            max_sum = sum;
            max_i = i;
        }
        sum = 0;
    }

    printf("%d %d", max_i, max_sum);
    return 0;
}