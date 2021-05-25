#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c, a;
	scanf("%c%c", &c, &a);

	if (c == 'A' && a == '+') printf("%.1f\n", 4.3);
	if (c == 'A' && a == '0') printf("%.1f\n", 4.0);
	if (c == 'A' && a == '-') printf("%.1f\n", 3.7);
	if (c == 'B' && a == '+') printf("%.1f\n", 3.3);
	if (c == 'B' && a == '0') printf("%.1f\n", 3.0);
	if (c == 'B' && a == '-') printf("%.1f\n", 2.7);
	if (c == 'C' && a == '+') printf("%.1f\n", 2.3);
	if (c == 'C' && a == '0') printf("%.1f\n", 2.0);
	if (c == 'C' && a == '-') printf("%.1f\n", 1.7);
	if (c == 'D' && a == '+') printf("%.1f\n", 1.3);
	if (c == 'D' && a == '0') printf("%.1f\n", 1.0);
	if (c == 'D' && a == '-') printf("%.1f\n", 0.7);
	if (c == 'F') printf("%.1f\n", 0.0);
	return 0;
}