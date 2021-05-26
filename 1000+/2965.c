#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, cnt = 0;
	scanf("%d %d %d", &a, &b, &c);

	while (b - a != 1 || c - b != 1) {
		if (b - a < c - b) {
			a = b;
			b++;
			cnt++;
		}

		else {
			c = b;
			b--;
			cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}