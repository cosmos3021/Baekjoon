#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[9] = { 0 };
	int type = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);

		if (arr[0] == 1) type = 1;
		else if (arr[0] == 8) type = 2;
		else type = 0;

		if (type == 1 && arr[i] == i + 1) continue;
		else if (type == 2 && arr[i] == 8 - i) continue;
		else type = 0;

		if (type == 0) break;
	}

	if (type == 1) printf("ascending\n");
	else if (type == 2)printf("descending\n");
	else printf("mixed\n");
	return 0;
}