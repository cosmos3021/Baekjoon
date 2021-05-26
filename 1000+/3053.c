#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
    int r;
    scanf("%d", &r);

    printf("%.6f\n", r * r * M_PI);
    printf("%.6f\n", r * r * 2.0);
    return 0;
}