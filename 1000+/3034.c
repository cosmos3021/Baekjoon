#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int n, w, h, dae, len;
	scanf("%d %d %d", &n, &w, &h);
	dae = sqrt(pow(w, 2) + pow(h, 2));

	for (int i = 0; i < n; i++) {
		scanf("%d", &len);
		if (len > dae) printf("NE\n");
		else printf("DA\n");
	}
	return 0;
}