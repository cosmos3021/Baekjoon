#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, x, y;
	int q[5] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x > 0 && y > 0) q[1]++;
		else if (x < 0 && y>0) q[2]++;
		else if (x < 0 && y < 0) q[3]++;
		else if (x > 0 && y < 0)q[4]++;
		else q[0]++;
	}

	for (int i = 1; i <= 4; i++) {
		printf("Q%d: %d\n", i, q[i]);
	}
	printf("AXIS: %d\n", q[0]);
	return 0;
}