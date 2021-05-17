#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char res[51] = { 0 };
	char alp[51] = { 0 };
	int n, len;
	scanf("%d", &n);

	scanf("%s", res);
	len = strlen(res);

	for (int i = 0; i < n - 1; i++) {
		scanf("%s", alp);

		for (int i = 0; i < len; i++) {
			if (res[i] != alp[i]) {
				res[i] = '?';
			}
		}
	}

	printf("%s", res);
	return 0;
}