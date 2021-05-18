#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    char arr[21] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr), res = 0, i = 2;

    for (int i = 0; i < len; i++) {
        if ((int)arr[i] > 96) res += (int)arr[i] - 96;
        else res += (int)arr[i] - 38;
    }

    while (1) {
        if (i < sqrt(res) + 1) {
            if (res % i == 0) {
                printf("It is not a prime word.");
                break;
            }
            else i++;
        }
        else {
            printf("It is a prime word.");
            break;
        }
    }
    return 0;
}