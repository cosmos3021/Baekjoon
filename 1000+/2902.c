#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char aaa[101] = { 0 };
	char res[101] = { 0 };
	scanf("%s", aaa);
	int len = strlen(aaa), tmp, j = 0;

	for (int i = 0; i < len; i++) {
		tmp = (int)aaa[i];
		if (tmp > 64 && tmp < 91) {
			res[j] = aaa[i];
			j++;
		}
	}

	printf("%s", res);
	return 0;
}