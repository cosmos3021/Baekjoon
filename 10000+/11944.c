#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	int n, m, len, j = 0;
	char a[4] = { 0 };
	scanf("%d %d", &n, &m);
	sprintf(a, "%d", n);
	len = strlen(a);
	if (n * len > m) {
		for (int i = 0; i < m; i++) {
			printf("%c", a[j]);
			j++;
			if (j == len) j = 0;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			printf("%d", n);
		}
	}
	return 0;
}