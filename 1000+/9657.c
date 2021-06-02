#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n % 7 == 2 || n % 7 == 0) printf("CY\n");
	else printf("SK\n");
	return 0;
}