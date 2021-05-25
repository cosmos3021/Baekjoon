#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int l, p, p1, p2, p3, p4, p5, sangn;
    scanf("%d %d", &l, &p);
    scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);
    sangn = l * p;
    p1 -= sangn, p2 -= sangn, p3 -= sangn, p4 -= sangn, p5 -= sangn;

    printf("%d %d %d %d %d", p1, p2, p3, p4, p5);
    return 0;
}