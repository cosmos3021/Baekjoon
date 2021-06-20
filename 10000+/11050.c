#include <stdio.h>

int facto(int i) {
    int res = 1;
    while (i > 1) {
        res *= i;
        i--;
    }
    return res;
}

int main(void) {
    int n, k, hue;
    scanf("%d %d", &n, &k);
    hue = facto(n) / (facto(k) * facto(n - k));

    printf("%d", hue);

    return 0;
}