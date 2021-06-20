#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int arr[1001] = { 0 };
    int n, gat = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n; i >= 0; i--) {
        if (i == 0) {
            printf("0");
            break;
        }
        for (int j = 0; j < n; j++) {
            if (arr[j] >= i) gat++;
        }
        if (gat >= i) {
            printf("%d\n", i);
            break;
        }
        gat = 0;
    }
    return 0;
}