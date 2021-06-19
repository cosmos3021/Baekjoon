#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[5001] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len;) {
		if (arr[i] == 'p' && arr[i + 1] == 'i') i += 2;
		else if (arr[i] == 'k' && arr[i + 1] == 'a') i += 2;
		else if (arr[i] == 'c' && arr[i + 1] == 'h' && arr[i + 2] == 'u') i += 3;
		else {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}