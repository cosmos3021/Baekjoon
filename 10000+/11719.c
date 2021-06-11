#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char tmp;

    while (scanf("%c", &tmp) != EOF) {
        printf("%c", tmp);
    }

    return 0;
}