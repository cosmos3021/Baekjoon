#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[1001] = { 0 };
	int alp[26] = { 0 };
	int n, len, res = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		len = strlen(arr);
		for (int j = 0; j < len; j++) {
			alp[(int)arr[j] - 65]++;
		}
		for (int j = 0; j < 26; j++) {
			if (alp[j] == 0) {
				res += (j + 65);
			}
		}
		printf("%d\n", res);
		for (int i = 0; i < 26; i++) alp[i] = 0;
		res = 0;
	}
	return 0;
}