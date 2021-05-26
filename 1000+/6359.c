#include <stdio.h>
#include <math.h>

int main(void) {
    int i, j, k, t, n, cnt = 0;
    int arr[101] = { 0 };
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        for (j = 1; j < n + 1; j++) {
            for (k = 0; k < n + 1; k += j) {
                if (arr[k] == 1) arr[k] = 0;
                else arr[k] = 1;
            }
        }

        for (j = 1; j < n + 1; j++) {
            if (arr[j] == 1) cnt++;
        }

        printf("%d\n", cnt);
        cnt = 0;
        for (j = 1; j < 102; j++) arr[j] = 0;
    }
    return 0;
}