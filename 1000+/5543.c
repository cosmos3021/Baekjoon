#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int i, ham = 0, hammin = 2000, soda = 0, sodamin = 2000;

    for (i = 0; i < 3; i++) {
        scanf("%d", &ham);
        if (ham < hammin) hammin = ham;
    }

    for (i = 0; i < 2; i++) {
        scanf("%d", &soda);
        if (soda < sodamin) sodamin = soda;
    }

    printf("%d", hammin + sodamin - 50);
    return 0;
}