#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[5002] = { 0 };
	int n, k;
	scanf("%d %d", &n, &k);

	printf("<%d", k);
	arr[k] = 1;
	int cnt = k, i = n;

	for (int j = k; ; j++) {
		if (i == 1) {
			printf(">\n");
			return 0;
		}
		if (j > n) j = 1;
		if (arr[j] == 0) cnt--;
		if (cnt == 0) {
			printf(", %d", j);
			arr[j] = 1;
			cnt = k;
			i--;
		}
	}
}