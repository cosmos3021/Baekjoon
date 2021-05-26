#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[1001] = { 0 };
	scanf("%s", word);
	int len = strlen(word), tmp;
	for (int i = 0; i < len; i++) {
		tmp = (int)word[i] - 3;
		if (tmp < 65) tmp += 26;
		printf("%c", tmp);
	}
	return 0;
}