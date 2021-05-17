#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char bef = 'A';
	char aaa[101] = { 0 };
	int alp[123] = { 0 };

	int n, len, bet, yes = 1, res = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", aaa);
		len = strlen(aaa);

		for (int j = 0; j < len; j++) {
			bet = (int)aaa[j];
			if (aaa[j] != bef && alp[bet] != 0) {
				yes = 0;
				break;
			}
			else {
				bef = aaa[j];
				alp[bet]++;
			}
		}

		if (yes == 1) res++;

		yes = 1, bef = 'A';
		for (int j = 97; j < 123; j++) {
			alp[j] = 0;
		}
	}

	printf("%d", res);
	return 0;
}