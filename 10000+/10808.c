#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int alp[123] = { 0 };
	char aaa[101] = { 0 };
	scanf("%s", aaa);
	int len = strlen(aaa), tmp;

	for (int j = 0; j < len; j++) {
		tmp = (int)aaa[j];
		alp[tmp]++;
	}

	for (int j = 97; j < 123; j++) {
		printf("%d ", alp[j]);
	}
	return 0;
}