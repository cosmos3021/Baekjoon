#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[100001] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr), over = 0;
	long long res = 0;

	for (int i = 0; i < len; i++) {
		if (arr[i] == '(') {
			if (arr[i + 1] == ')') { // 레이저
				res += over;
				i++;
			}
			else over++; // 철막대 추가
		}
		else { // 철막대 제거
			over--;
			res++;
		}
	}
	printf("%lld", res);
	return 0;
}