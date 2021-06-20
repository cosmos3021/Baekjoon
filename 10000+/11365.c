#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char tmp[501] = { 0 };
	int len;

	while (1) {
		scanf(" %[^\n]s", tmp);
		if (strcmp(tmp, "END") == 0) break;
		len = strlen(tmp) - 1;
		for (int i = len; i >= 0; i--) {
			printf("%c", tmp[i]);
		}
		printf("\n");
	}
	return 0;
}