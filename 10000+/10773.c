#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[100001] = { 0 };
	int k, input, j = 0;
	long long res = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		scanf("%d", &input);
		if (input == 0) {
			arr[j - 1] = 0;
			j--;
		}
		else {
			arr[j] = input;
			j++;
		}
	}

	for (int i = 0; i < j; i++) {
		res += arr[i];
	}
	printf("%lld", res);
	return 0;
}