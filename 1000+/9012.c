#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[51] = { 0 };
    int t, len, left = 0, right = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", arr);
        len = strlen(arr);

        for (int i = 0; i < len; i++) {
            if (left < right) {
                break;
            }

            if (arr[i] == '(') {
                left++;
            }
            else if (arr[i] == ')') {
                right++;
            }
        }
        if (left == right) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        right = 0, left = 0;
    }
    return 0;
}