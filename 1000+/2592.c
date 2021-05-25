#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, i, aver = 0, many = 0, manyi;
    int arr[100] = { 0 };

    for (i = 0; i < 10; i++) {
        scanf("%d", &a);
        aver += a;
        arr[a / 10]++;
    }

    for (i = 0; i < 100; i++) {
        if (many < arr[i]) {
            many = arr[i];
            manyi = i;
        }
    }

    printf("%d\n%d", aver / 10, manyi * 10);
    return 0;
}