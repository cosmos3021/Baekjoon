#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, res = 0, odd = 0, tmp = 1;
	int p[101] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		if (p[i] == 1) odd++;
	}

	if (odd == n) {
		if (n % 2 == 0) printf("koosaga\n");
		else printf("cubelover\n");
	}

	else {
		for (int i = 0; i < n; i++) {
			if (odd % 2 == 0 && odd > 0) {
				if (p[i] != 1 && tmp == 1) {
					p[i] = 1;
					tmp = 0;
				}
			}
			res ^= p[i];
		}
		if (res == 0) printf("cubelover\n");
		else printf("koosaga\n");
	}
	return 0;
}