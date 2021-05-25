#include <stdio.h>

int main(void) {
	int a, b, c, i;

	scanf("%d %d %d", &a, &b, &c);

	int result = a * b * c;
	int arr[10] = { 0 };

	while (result) {
		arr[result % 10]++;
		result /= 10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}