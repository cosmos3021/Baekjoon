#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);

    sum = a * b - c;
    if (sum < 0) sum = 0;
    printf("%d", sum);
    return 0;
}