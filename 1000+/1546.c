#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, i;
    double m = 0, max = 0, sum = 0;
    double arr[1000] = { 0 };
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &m);
        arr[i] = m;
        if (m > max) {
            max = m;
        }
    }

    for (i = 0; i < n; i++) {
        sum += arr[i] / max * 100;
    }

    printf("%.2lf\n", sum / n);
    return 0;
}