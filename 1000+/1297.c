#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	float dae, x, y, k, tmp1, tmp2;
	int x1, y1;
	scanf("%f %f %f", &dae, &x, &y);
	tmp1 = x * x + y * y;
	tmp2 = sqrt(tmp1);
	k = dae / tmp2;
	x1 = x * k;
	y1 = y * k;
	printf("%d %d\n", x1, y1);
}
