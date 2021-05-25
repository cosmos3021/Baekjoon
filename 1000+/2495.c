#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[9] = { 0 };
	int big = 0, inp = 1;

	for (int i = 0; i < 3; i++) {
		scanf("%s", arr);
		for (int i = 0; i < 8; i++) {
			if (arr[i + 1] == arr[i]) {
				inp++;
			}
			else {
				if (big < inp)big = inp;
				inp = 1;
			}
		}
		printf("%d\n", big);
		big = 0, inp = 1;
	}
	return 0;
}