#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);

    if (input % 4 == 0) {
        if ((input % 100 != 0) || (input % 400 == 0)) {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}