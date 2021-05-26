#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[21] = { 0 };
	int jamo[21] = { 0 };
	int len, fir = 5, sec = 6, thi = 6;

	while (1) {
		scanf("%s", arr);
		if (strcmp(arr, "end") == 0) break;
		len = strlen(arr);

		for (int i = 0; i < len; i++) {
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
				jamo[i] = 3; // 2번째 조건 판독에 쓰일 jamo 배열 제작; 모음은 3, 자음은 4
				fir = 6; // 1번째 조건. 만족시 6
			}
			else jamo[i] = 4;

			if (arr[i] == arr[i + 1]) {
				thi = 5; // 3번째 조건. 불만족시 5
				if (arr[i] == 'e' || arr[i] == 'o') {
					thi = 6; // ee나 oo면 6
				}
			}
		}

		for (int i = 0; i < len; i++) {
			if (jamo[i] == jamo[i + 1] && jamo[i] == jamo[i + 2]) {
				sec = 5; // 2번째 조건. 불만족시 5
			}
			jamo[i] = 0; // jamo 초기화
		}

		if (fir + sec + thi == 18) {
			printf("<%s> is acceptable.\n", arr);
		}
		else {
			printf("<%s> is not acceptable.\n", arr);
		}
		fir = 5, sec = 6, thi = 6;
	}
	return 0;
}