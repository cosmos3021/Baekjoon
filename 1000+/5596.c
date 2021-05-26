#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c, d, min = 0, man = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min += a + b + c + d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    man += a + b + c + d;

    if (man > min) printf("%d", man);
    else printf("%d", min);
    return 0;
}