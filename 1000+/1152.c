#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int len, cnt = 0;
    char arr[1000001] = { 0 };
    gets(arr);

    len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] == ' ') {
            cnt++;
            if (i == 0 || i == len - 1) {
                cnt--;
            }
            if (len == 1 && i == 0) {
                cnt--;
            }
        }
    }

    printf("%d\n", cnt + 1);
    return 0;
}