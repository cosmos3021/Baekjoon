#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) return 0;
		if (a > b) printf("%s\n", "Yes");
		else printf("%s\n", "No");
	}
}