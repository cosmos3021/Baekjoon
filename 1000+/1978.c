#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, n = 0, res = 0, musi = 0;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        for (j = 2; j <= arr[i]; j++) {
            if (j != arr[i] && arr[i] % j == 0) musi = 1;
        }
        if (arr[i] != 1 && musi == 0) res++;
        musi = 0;
    }

    printf("%d", res);
    return 0;
}