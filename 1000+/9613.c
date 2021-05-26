#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	while (1) {
		int tmp = a % b;
		if (tmp == 0) return b;
		a = b;
		b = tmp;
	}

}

int main(void) {
	int t, n;
	long long sum = 0;
	int arr[100] = { 0 };
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
		}

		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += gcd(arr[j], arr[k]);
			}
		}

		printf("%lld\n", sum);
		sum = 0;
	}
}