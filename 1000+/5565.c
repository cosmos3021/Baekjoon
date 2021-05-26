#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int i, all, byeonsoo;
    scanf("%d", &all);

    for (i = 0; i < 9; i++) {
        scanf("%d", &byeonsoo);
        all -= byeonsoo;
    }

    printf("%d", all);
    return 0;
}