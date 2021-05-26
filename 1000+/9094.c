#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, m, cnt = 0;
    float k;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);

        for (int b = 2; b < n; b++) {
            for (int a = 1; a < b; a++) {
                if ((a * a + b * b + m) % (a * b) == 0) cnt++;
            }
        }

        printf("%d\n", cnt);
        cnt = 0;
    }
    return 0;
}