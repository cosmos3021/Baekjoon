#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) return 0;
        if (c * c == a * a + b * b || b * b == a * a + c * c || a * a == c * c + b * b) printf("right\n");
        else printf("wrong\n");
    }
}