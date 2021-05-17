#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int n, i, j, two = 0, five = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        j = i;
        while (1) {
            if (j % 5 == 0) {
                j /= 5;
                five++;
            }
            else break;
        }
        while (1) {
            if (j % 2 == 0) {
                j /= 2;
                two++;
            }
            else break;
        }
    }

    if (five > two) printf("%d\n", two);
    else printf("%d\n", five);
    return 0;
}