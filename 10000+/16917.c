#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c, x, y, sum = 0, ch, k;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

    if (x > y) {
        ch = y;
        if (2 * c < a) sum += 2 * c * (x - y);
        else sum += a * (x - y);
    }

    else {
        ch = x;
        if (2 * c < b) sum += 2 * c * (y - x);
        else sum += b * (y - x);
    }

    if (2 * c < a + b) sum += ch * 2 * c;
    else sum += ch * (a + b);

    printf("%d\n", sum);
    return 0;
}