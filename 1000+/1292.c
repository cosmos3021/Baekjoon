#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, i, j, cnt = 0, e_cnt = 1, sum = 0;
    int arr[1000] = { 0 };
    scanf("%d %d", &a, &b);

    for (i = 1; i <= 45; i++) {
        for (j = i; j > 0; j--) {
            if (e_cnt + cnt > 1000) break;
            arr[e_cnt + cnt] = i;
            cnt++;
        }
        e_cnt += cnt;
        cnt = 0;
    }

    for (i = a; i <= b; i++) {
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}