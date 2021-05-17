#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t, n, y = 0, m = 0, yy, mm;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		y += n / 30 + 1;
		m += n / 60 + 1;
	}

	yy = y * 10;
	mm = m * 15;

	if (yy == mm) printf("Y M %d\n", yy);
	else if (yy > mm) printf("M %d\n", mm);
	else printf("Y %d\n", yy);
	return 0;
}