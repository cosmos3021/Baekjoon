#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[10001] = { 0 };
	char input[6] = { 0 };
	int n, L = 0, R = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		if (R < L) R = L;
		scanf("%s", input);

		if (strcmp("push", input) == 0) {
			scanf("%d", &arr[R]);
			R++;
		}

		else if (strcmp("pop", input) == 0) {
			if (L < R) {
				printf("%d\n", arr[L]);
				arr[L] = 0;
				L++;
			}
			else printf("-1\n");
		}

		else if (strcmp("size", input) == 0) {
			printf("%d\n", R - L);
		}

		else if (strcmp("empty", input) == 0) {
			if (L < R) printf("0\n");
			else printf("1\n");
		}

		else if (strcmp("front", input) == 0) {
			if (L < R) printf("%d\n", arr[L]);
			else printf("-1\n");
		}

		else { // back
			if (L < R) printf("%d\n", arr[R - 1]);
			else printf("-1\n");
		}
	}
	return 0;
}