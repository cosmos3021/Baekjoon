#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int len, bcnt = 0, cnt = 0, res = 0, eq = 0;
    char arr[1000001] = { 0 };
    scanf("%s", arr);
    len = strlen(arr);

    for (int i = 65; i < 91; i++) {
        for (int j = 0; j < len; j++) {
            if ((int)arr[j] == i || (int)arr[j] == i + 32) {
                cnt++;
            }
        }

        if (cnt > bcnt) {
            eq = 0;
            bcnt = cnt;
            res = i;
        }
        else if (cnt == bcnt) {
            eq = 1;
        }
        cnt = 0;
    }

    if (eq == 1) printf("?");
    else {
        printf("%c", (char)res);
    }
    return 0;
}