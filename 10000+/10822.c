#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	scanf("%s", arr);
	long long len = strlen(arr), tmp = 0, res = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == ',') {
			res += tmp;
			tmp = 0;
		}
		else {
			tmp *= 10;
			tmp += arr[i] - '0';
		}
	}
	res += tmp;
	printf("%lld\n", res);
	return 0;
}