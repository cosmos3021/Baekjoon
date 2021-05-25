#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int arr[3] = { 0 }, tmp;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}