#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int out, in, i, sum = 0, res = 0;

    for (i = 0; i < 4; i++) {
        scanf("%d %d", &out, &in);
        sum -= out;
        sum += in;
        if (sum > res) res = sum;
    }

    printf("%d\n", res);
    return 0;
}