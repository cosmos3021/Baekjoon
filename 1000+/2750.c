#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, i = 0, j, temp;
    scanf("%d", &n);
    int arr[1000] = { 0 };

    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }

    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) printf("%d\n", arr[i]);
    return 0;
}