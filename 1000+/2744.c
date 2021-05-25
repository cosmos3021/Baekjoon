#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int res[1001] = { 0 };
	char word[1001] = { 0 };
	scanf("%s", word);
	int len = strlen(word), tmp;

	for (int i = 0; i < len; i++) {
		if ((int)word[i] > 96) res[i] = (int)word[i] - 32;
		else res[i] = (int)word[i] + 32;
	}

	for (int i = 0; i < len; i++) {
		printf("%c", (char)res[i]);
	}
	return 0;
}