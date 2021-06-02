#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[16] = { 0 };
	int v, a = 0, b = 0;
	scanf("%d", &v);
	scanf("%s", arr);
	for (int i = 0; i < v; i++) {
		if (arr[i] == 'A') a++;
		else b++;
	}
	if (a > b) printf("A\n");
	else if (a == b) printf("Tie\n");
	else printf("B\n");
	return 0;
}