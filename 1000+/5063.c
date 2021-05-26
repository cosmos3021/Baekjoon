#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, r, e, c, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &r, &e, &c);
        if (e - c > r) printf("advertise\n");
        if (e - c == r) printf("does not matter\n");
        if (e - c < r) printf("do not advertise\n");
    }
    return 0;
}