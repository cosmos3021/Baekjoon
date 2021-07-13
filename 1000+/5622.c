#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[16] = { 0 };
	int len, res = 0;
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if ((int)arr[i] == 90) res += 10;
		else if ((int)arr[i] > 82) res += ((int)arr[i] - 57) / 3;
		else res += ((int)arr[i] - 56) / 3;
	}
	printf("%d\n", res);
	return 0;
}