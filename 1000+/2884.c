#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    b -= 45;
    if (b < 0) {
        b += 60;
        a--;
        if (a < 0) a += 24;
    }
    printf("%d %d", a, b);
	return 0;
}