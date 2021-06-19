#include <stdio.h>

int main(void) {
	int a;
	int i;

	scanf("%d", &a);

	for (i = 0; i < a; i++) {
		int b, c;
		scanf("%d %d\n", &b, &c);
		printf("%d\n", b + c);
	}

	return 0;
}