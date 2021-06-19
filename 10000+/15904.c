#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1001] = { 0 };
	scanf("%[^\n]", arr);
	int len = strlen(arr), ucpc = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] == 'U' && ucpc == 0) {
			ucpc++;
		}
		if (arr[i] == 'C' && ucpc == 1) {
			ucpc++;
		}
		if (arr[i] == 'P' && ucpc == 2) {
			ucpc++;
		}
		if (arr[i] == 'C' && ucpc == 3) {
			ucpc++;
		}
	}

	if (ucpc == 4) printf("I love UCPC");
	else printf("I hate UCPC");
	return 0;
}