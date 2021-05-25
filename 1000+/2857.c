#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[11] = { 0 };
	int res[5] = { 0 };
	int len, huh = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%s", arr);
		len = strlen(arr);

		for (int j = 0; j < len - 2; j++) {
			if (arr[j] == 'F' && arr[j + 1] == 'B' && arr[j + 2] == 'I') {
				res[i]++;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (res[i] != 0) {
			printf("%d ", i + 1);
			huh = 1;
		}
	}
	if (huh == 0) printf("HE GOT AWAY!");
	printf("\n");
	return 0;
}