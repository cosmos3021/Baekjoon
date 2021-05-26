#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int n, cnt = 0, sum = 1;
	int arr[100] = { 0 };

	while (1) {
		scanf("%d", &n);
		if (n == -1) return 0;

		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				arr[cnt] = i;
				cnt++;
			}
		}

		for (int i = 0; i < cnt; i++) sum += arr[i];

		if (sum == n) {
			printf("%d = %d", n, 1);

			for (int i = 0; i < cnt; i++) {
				printf(" + %d", arr[i]);
			}

			printf("\n");
		}

		else printf("%d is NOT perfect.\n", n);

		cnt = 0, sum = 1;
		for (int i = 0; i < 100; i++) {
			arr[i] = 0;
		}
	}
}