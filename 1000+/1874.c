#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[100001] = { 0 };
	int arr2[100001] = { 0 };
	char res[200001] = { 0 };
	int n, k = 0, num = 0, t = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	while (num < n) {
		if (k < arr[num]) {
			k++;
			if (arr2[k] != 2) {
				res[t] = '+';
				t++;
			}
		}

		else if (k == arr[num]) {
			num++;
			arr2[k] = 2;
			res[t] = '-';
			t++;
			while (arr2[k] == 2) k--;
		}

		else {
			printf("NO\n");
			return 0;
		}
	}

	for (int i = 0; i < t; i++) {
		printf("%c\n", res[i]);
	}
	return 0;
}