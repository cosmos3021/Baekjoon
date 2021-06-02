#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[255] = { 0 };
	scanf("%[^\n]", arr);
	int len = strlen(arr), none = 1, emo = 0;
	for (int i = 2; i < len; i++) {
		if (arr[i - 2] == ':' && arr[i - 1] == '-') {
			if (arr[i] == ')') {
				none = 0;
				emo++;
			}
			else if (arr[i] == '(') {
				none = 0;
				emo--;
			}
		}
	}
	if (none == 1) printf("none");
	else {
		if (emo > 0) printf("happy");
		else if (emo == 0) printf("unsure");
		else printf("sad");
	}
	return 0;
}