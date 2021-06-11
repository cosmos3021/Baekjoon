#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char tmp[101] = { 0 };

    while (scanf("%[^\n]\n", tmp) == 1) {
        printf("%s\n", tmp);
    }

    return 0;
}