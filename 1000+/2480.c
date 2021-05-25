#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c, sum, max;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) sum = 10000 + a * 1000;
    else if (a == b) sum = 1000 + a * 100;
    else if (a == c) sum = 1000 + a * 100;
    else if (b == c) sum = 1000 + b * 100;
    else {
        if (a > b) max = a;
        else max = b;
        if (max < c) max = c;
        sum = max * 100;
    }

    printf("%d", sum);
    return 0;
}