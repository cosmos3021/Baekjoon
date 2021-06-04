#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		printf("Hello World, Judge %d!\n", i);
	}
	return 0;
}
