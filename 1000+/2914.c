#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a * (b - 1) + 1;
    printf("%d", sum);
    return 0;
}