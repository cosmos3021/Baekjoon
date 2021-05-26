#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0, score, sum = 0, aver = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        if (score < 40) score = 40;
        sum += score;
    }
    printf("%d", sum / 5);
    return 0;
}