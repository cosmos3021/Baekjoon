#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int c = 100, s = 100, cd, sd, n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &cd, &sd);
		if (cd > sd) s -= cd;
		if (cd < sd) c -= sd;
	}

	printf("%d\n%d\n", c, s);
}
