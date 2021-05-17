#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int There_is_a_genius_that_cannot_be_overcome(int n) {
    int r = 0;
    while (n) {
        r *= 10;
        r += n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int x, y, res;
    scanf("%d %d", &x, &y);
    res = There_is_a_genius_that_cannot_be_overcome(There_is_a_genius_that_cannot_be_overcome(x) + There_is_a_genius_that_cannot_be_overcome(y));
    printf("%d", res);
    return 0;
}