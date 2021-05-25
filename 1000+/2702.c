#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	return a, b;
}

int main(void) {
	int t, a, b, gcdd, lcmm;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);

		if (a < b) swap(a, b);

		gcdd = gcd(a, b);
		lcmm = lcm(a, b);

		printf("%d %d\n", lcmm, gcdd);
	}

	return 0;
}