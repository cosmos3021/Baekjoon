#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int n, i, j, len = 0, sum = 0;
    char arr[80];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", &arr);
        sum = 0, len = 0;
        for (j = 0; j < strlen(arr); j++) {
            if (arr[j] == 'O') {
                len++;
                sum += len;
            }
            if (arr[j] == 'X') len = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}