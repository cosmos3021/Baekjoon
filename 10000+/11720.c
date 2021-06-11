#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, i, sum = 0;
    char arr[100] = { 0 };
    scanf("%d", &a);
    scanf("%s", arr);

    for (i = 0; i < a; i++) {
        sum += (arr[i] - '0');
    }
    printf("%d\n", sum);

    return 0;
}