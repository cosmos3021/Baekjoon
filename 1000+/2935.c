#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char A[101] = { 0 };
	char B[101] = { 0 };
	char giho;
	scanf("%s %c %s", A, &giho, B);
	int alen = strlen(A), blen = strlen(B), M = alen;

	if (giho == '+') {
		if (M < blen) M = blen;
		for (int i = M; i > 0; i--) {
			if (i == alen || i == blen) {
				if (alen == blen) printf("2");
				else printf("1");
			}
			else printf("0");
		}
	}

	else {
		printf("1");
		for (int i = 0; i < alen + blen - 2; i++) {
			printf("0");
		}
	}
	return 0;
}