#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, hol = 1, n4, cnt = 1;

	while (1) {
		scanf("%d", &n);
		if (n == 0) break;

		n *= 3; // n1

		if (n % 2 == 0) {
			hol = 0; //È¦Â¦±¸ºÐ
			n /= 2; // n2
		}
		else n = (n + 1) / 2; // n2

		n4 = n / 3; // n4

		if (hol == 1) printf("%d. odd %d\n", cnt, n4);
		else printf("%d. even %d\n", cnt, n4);
		cnt++;
		hol = 1;
	}

	return 0;
}