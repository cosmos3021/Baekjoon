#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int ww[10] = { 0 };
    int kk[10] = { 0 };
    int w = 0, k = 0, tmp;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &ww[i]);
    }
    for (int i = 0; i < 10; i++) {
        scanf("%d", &kk[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (ww[i] > ww[j]) {
                tmp = ww[i];
                ww[i] = ww[j];
                ww[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (kk[i] > kk[j]) {
                tmp = kk[i];
                kk[i] = kk[j];
                kk[j] = tmp;
            }
        }
    }
    for (int i = 7; i < 10; i++) {
        w += ww[i];
        k += kk[i];
    }
    printf("%d %d\n", w, k);
    return 0;
}