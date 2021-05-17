#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int p, kim, im, small = 0, big = 0, cnt = 1;
    scanf("%d %d %d", &p, &kim, &im);

    if (kim < im) small = kim, big = im;
    else small = im, big = kim;

    while (1) {
        if (small % 2 == 1) small++;
        if (big % 2 == 1) big++;
        small /= 2, big /= 2;

        if (small == big) {
            printf("%d", cnt);
            return 0;
        }
        cnt++;
    }
}