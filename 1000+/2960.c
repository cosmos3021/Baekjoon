#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, k, i, j, cnt = 0;
	int arr[1001] = { 0 };
	scanf("%d %d", &n, &k);

	for (i = 2; i <= n; i++) {
		for (j = i; j <= n; j += i) {
			if (arr[j] == 0) {
				arr[j] = 1;
				cnt++;
				if (cnt == k) {
					printf("%d", j);
					return 0;
				}
			}
		}
	}
}