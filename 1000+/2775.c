#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t, k, n, x = 1, y = 0;
    int arr[15][15];

    while (y < 15) {
        arr[0][y] = 1;
        arr[y][0] = x;
        x++;
        y++;
    }

    for (x = 1; x < 15; x++) {
        for (y = 1; y < 15; y++) arr[x][y] = arr[x - 1][y] + arr[x][y - 1];
    }

    scanf("%d", &t);
    while (t > 0) {
        scanf("%d\n""%d", &k, &n);
        printf("%d\n", arr[n - 1][k]);
        t--;
    }

    return 0;
}