#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int boon1, boon2, boonsum, mo1, mo2, mosum, i;
	scanf("%d %d", &boon1, &mo1);
	scanf("%d %d", &boon2, &mo2);

	boonsum = boon1 * mo2 + boon2 * mo1;
	mosum = mo1 * mo2;

	for (i = 30000; i >= 2; i--) {
		if (boonsum % i == 0 && mosum % i == 0) {
			boonsum /= i;
			mosum /= i;
		}
	}

	printf("%d %d", boonsum, mosum);
	return 0;
}