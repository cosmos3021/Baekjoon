#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) printf("SK");
    else if (n % 2 == 0) printf("CY");
    return 0;
}