#include <stdio.h>

int main(void) {
	int a = 0;
	int i;

	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		int b = 0;
		int c = 0;
		scanf("%d %d\n", &b, &c);
		printf("Case #%d: %d\n", i, b + c);
	}

	return 0;
}