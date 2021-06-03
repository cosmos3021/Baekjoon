#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[10001] = { 0 };
	char input[6] = { 0 };
	int n, m, k = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", input);

		if (strcmp("push", input) == 0) {
			scanf("%d", &m);
			arr[k] = m;
			k++;
		}

		else if (strcmp("pop", input) == 0) {
			if (arr[0] != 0) printf("%d\n", arr[k - 1]);
			else printf("-1\n");

			if (k - 1 < 0) arr[k] = 0;
			else {
				arr[k - 1] = 0;
				k--;
			}
		}

		else if (strcmp("size", input) == 0) {
			printf("%d\n", k);
		}

		else if (strcmp("empty", input) == 0) {
			if (arr[0] != 0) printf("0\n");
			else printf("1\n");
		}

		else { // top
			if (arr[0] != 0) {
				if (k - 1 < 0) printf("%d\n", arr[k]);
				else printf("%d\n", arr[k - 1]);
			}
			else printf("-1\n");
		}
	}
	return 0;
}