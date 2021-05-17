#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[9] = { 0 };
	int res = 0;
	for (int i = 1; i < 9; i++) {
		scanf("%s", arr);
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (arr[j] == 'F' && j % 2 != 0) {
					res++;
				}
			}
			else {
				if (arr[j] == 'F' && j % 2 == 0) {
					res++;
				}
			}
		}
	}
	printf("%d", res);
	return 0;
}