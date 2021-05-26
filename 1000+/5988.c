#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, e, len;
    char k[70];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", &k);
        len = strlen(k);
        e = k[len - 1];
        if (e % 2 == 0) printf("even\n");
        else if (e % 2 == 1) printf("odd\n");
    }
    return 0;
}