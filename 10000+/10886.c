#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, n, ura, cnt0 = 0, cnt1 = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &ura);
		if (ura == 0) cnt0++;
		if (ura == 1) cnt1++;
	}

	if (cnt0 > cnt1) printf("Junhee is not cute!");
	if (cnt1 > cnt0) printf("Junhee is cute!");
	return 0;
}