#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int c = 0, n = 0, score = 0, sum = 0, aver = 0, happy = 0;
    double arr[1000] = { 0 };
    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &score);
            arr[j] = score;
            sum += arr[j];
        }
        aver = sum / n;

        for (int k = 0; k < n; k++) {
            if (arr[k] > aver) {
                happy++;
            }
        }
        printf("%.3lf%%\n", (double)happy / n * 100);
        sum = 0, aver = 0, happy = 0;
    }

    return 0;
}