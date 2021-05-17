#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int g, i = 1, j = 1, no = 1;
	scanf("%d", &g);

	while (1) {
		if (i * i - j * j == g) {
			printf("%d\n", i);
			no = 0;
			if (i - j == 1) return 0;
			i++;
		}

		else if (i * i - j * j > g && i - j == 1) {
			if (no == 1) printf("%d\n", -1);
			return 0;
		}

		else if (i * i - j * j > g) j++;
		else i++;
	}
}