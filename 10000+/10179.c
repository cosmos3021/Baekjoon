#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int a;
    double b, c;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%lf", &b);
        c = 0.8 * b;
        printf("$%.2lf\n", c);
    }
    return 0;
}