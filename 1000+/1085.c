#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y, w, h, xway = 0, yway = 0;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    if (x < w - x) xway = x;
    else xway = w - x;

    if (y < h - y) yway = y;
    else yway = h - y;

    if (xway < yway) printf("%d", xway);
    else printf("%d", yway);
    return 0;
}