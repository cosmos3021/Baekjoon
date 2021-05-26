#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, n, sum = 0, musi = 0;
    int arr[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        arr[i] = n % 42;
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) musi = 1;
        }
        if (musi == 0) sum++;
        musi = 0;
    }
    printf("%d", sum);
    return 0;
}