#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr1[21] = { 0 };
	char arr2[21] = { 0 };
	int dis[21] = { 0 };
	int n, len;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %s", arr1, arr2);
		len = strlen(arr1);
		for (int i = 0; i < len; i++) {
			if ((int)arr1[i] <= (int)arr2[i]) {
				dis[i] = (int)arr2[i] - (int)arr1[i];
			}
			else {
				dis[i] = (int)arr2[i] - (int)arr1[i] + 26;
			}
		}
		printf("Distances:");
		for (int i = 0; i < len; i++) {
			printf(" %d", dis[i]);
		}
		printf("\n");
	}
	return 0;
}