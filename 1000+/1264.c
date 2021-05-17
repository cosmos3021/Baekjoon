#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[256] = { 0 };
	int len, sum = 0;
	while (1) {
		scanf(" %[^\n]", arr);
		if (arr[0] == '#') break;
		len = strlen(arr);
		for (int i = 0; i < len; i++) {
			if (arr[i] == 'A' || arr[i] == 'a') sum++;
			else if (arr[i] == 'E' || arr[i] == 'e') sum++;
			else if (arr[i] == 'I' || arr[i] == 'i') sum++;
			else if (arr[i] == 'O' || arr[i] == 'o') sum++;
			else if (arr[i] == 'U' || arr[i] == 'u') sum++;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}