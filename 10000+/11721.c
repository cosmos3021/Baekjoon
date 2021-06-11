#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[101] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 1; i <= len; i++) {
        printf("%c", arr[i - 1]);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}