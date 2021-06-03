#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int len;
    char arr[101] = { 0 };
    int alpha[26] = { 0 };
    scanf("%s", arr);

    for (int i = 0; i < 26; i++) {
        alpha[i] = -1;
    }

    len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] == 'a' && alpha[0] == -1) {
            alpha[0] = i;
        }
        if (arr[i] == 'b' && alpha[1] == -1) {
            alpha[1] = i;
        }
        if (arr[i] == 'c' && alpha[2] == -1) {
            alpha[2] = i;
        }
        if (arr[i] == 'd' && alpha[3] == -1) {
            alpha[3] = i;
        }
        if (arr[i] == 'e' && alpha[4] == -1) {
            alpha[4] = i;
        }
        if (arr[i] == 'f' && alpha[5] == -1) {
            alpha[5] = i;
        }
        if (arr[i] == 'g' && alpha[6] == -1) {
            alpha[6] = i;
        }
        if (arr[i] == 'h' && alpha[7] == -1) {
            alpha[7] = i;
        }
        if (arr[i] == 'i' && alpha[8] == -1) {
            alpha[8] = i;
        }
        if (arr[i] == 'j' && alpha[9] == -1) {
            alpha[9] = i;
        }
        if (arr[i] == 'k' && alpha[10] == -1) {
            alpha[10] = i;
        }
        if (arr[i] == 'l' && alpha[11] == -1) {
            alpha[11] = i;
        }
        if (arr[i] == 'm' && alpha[12] == -1) {
            alpha[12] = i;
        }
        if (arr[i] == 'n' && alpha[13] == -1) {
            alpha[13] = i;
        }
        if (arr[i] == 'o' && alpha[14] == -1) {
            alpha[14] = i;
        }
        if (arr[i] == 'p' && alpha[15] == -1) {
            alpha[15] = i;
        }
        if (arr[i] == 'q' && alpha[16] == -1) {
            alpha[16] = i;
        }
        if (arr[i] == 'r' && alpha[17] == -1) {
            alpha[17] = i;
        }
        if (arr[i] == 's' && alpha[18] == -1) {
            alpha[18] = i;
        }
        if (arr[i] == 't' && alpha[19] == -1) {
            alpha[19] = i;
        }
        if (arr[i] == 'u' && alpha[20] == -1) {
            alpha[20] = i;
        }
        if (arr[i] == 'v' && alpha[21] == -1) {
            alpha[21] = i;
        }
        if (arr[i] == 'w' && alpha[22] == -1) {
            alpha[22] = i;
        }
        if (arr[i] == 'x' && alpha[23] == -1) {
            alpha[23] = i;
        }
        if (arr[i] == 'y' && alpha[24] == -1) {
            alpha[24] = i;
        }
        if (arr[i] == 'z' && alpha[25] == -1) {
            alpha[25] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", alpha[i]);
    }
    return 0;
}