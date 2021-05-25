#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int na[101];
int st[101];
int ju[101];

void put(int n) {
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ju[i] < ju[j]) {
				tmp = na[i];
				na[i] = na[j];
				na[j] = tmp;

				tmp = st[i];
				st[i] = st[j];
				st[j] = tmp;

				tmp = ju[i];
				ju[i] = ju[j];
				ju[j] = tmp;
			}
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &na[i], &st[i], &ju[i]);
	}

	put(n);

	printf("%d %d\n", na[0], st[0]);
	printf("%d %d\n", na[1], st[1]);

	if (na[0] == na[1] && na[0] == na[2]) {
		for (int i = 3; i < n; i++) {
			if (na[i] != na[0]) {
				printf("%d %d\n", na[i], st[i]);
				break;
			}
		}
	}
	else printf("%d %d\n", na[2], st[2]);
	return 0;
}