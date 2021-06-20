#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char word[101] = { 0 };
    scanf("%s", word);
    int len = strlen(word), tmp, res = 0;
    for (int i = 0; i < len; i++) {
        tmp = (int)word[i];
        if (tmp == 97 || tmp == 101 || tmp == 105 || tmp == 111 || tmp == 117) {
            res++;
        }
    }
    printf("%d\n", res);
    return 0;
}