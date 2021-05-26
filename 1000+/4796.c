#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int l, p, v, sum = 0, cnt = 1;

	while (1) {
		scanf("%d %d %d", &l, &p, &v);
		if (l == 0) break;

		while (v >= p) {
			v -= p;
			sum += l;
		}

		if (v < l) sum += v;
		else sum += l;

		printf("Case %d: %d\n", cnt, sum);
		cnt++, sum = 0;
	}
	return 0;
}