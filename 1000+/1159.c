#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int alp[123] = { 0 };
	int n, hahah = 0;
	char tmp[31] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf(" %[^\n]", tmp);
		alp[(int)tmp[0]]++;
	}

	for (int i = 97; i < 123; i++) {
		if (alp[i] > 4) {
			printf("%c", i);
			hahah++;
		}
	}
	if (hahah == 0) printf("PREDAJA");
	return 0;
}