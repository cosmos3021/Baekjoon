#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int n, p;
	char name[21] = { 0 };
	long long price, maice = 0;
	char mame[21] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p);
		for (int j = 0; j < p; j++) {
			scanf("%lld %s", &price, name);
			if (price > maice) {
				maice = price;
				strcpy(mame, name);
			}
		}
		printf("%s\n", mame);
		maice = 0;
	}
	return 0;
}