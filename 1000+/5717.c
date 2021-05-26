#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int m, f;
	while (1) {
		scanf("%d %d", &m, &f);
		if (m == 0 && f == 0) return 0;
		printf("%d\n", m + f);
	}
}
