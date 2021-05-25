#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int on, off, train = 0, lar = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &off, &on);
		train += on - off;
		if (train > lar) lar = train;
	}

	printf("%d", lar);
}