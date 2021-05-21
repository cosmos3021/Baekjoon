#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char arr[2187][2187];

int pattern(int x, int y, int n) {
    int i, j, m = n / 3, cnt = 0;

    if (n == 1) {
        arr[x][y] = '*';
        return;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cnt++;
            if (cnt != 5) pattern(x + i * m, y + j * m, m);
        }
    }
}

int main(void) {
    int i, j, n;
    scanf("%d", &n);

    for (i = 0; i < 2187; i++) {
        for (j = 0; j < 2187; j++) {
            arr[i][j] = ' ';
        }
    }

    pattern(0, 0, n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}