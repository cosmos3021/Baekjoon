#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char str[11] = { 0 };
char arr[11] = { 0 };

int gum(int j, int slen) {
	for (int i = 0; i < slen; i++) {
		if (j > 9) j -= 10; // 9��° ������ 0��°
		if (arr[j] != str[i]) return 1; // �ٸ��� 1 ��ȯ
		j++;
	}
	return 0; // �Ȱ����� 0 ��ȯ
}

int main(void) {
	int n, slen, alen, tmp = 1, res = 0;
	scanf("%s", str);
	scanf("%d", &n);
	slen = strlen(str);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		alen = strlen(arr);
		for (int j = 0; j < alen; j++) {
			if (arr[j] == str[0]) {
				tmp = gum(j, slen);
			}
			if (tmp == 0) { // �Ȱ����� res++
				res++;
				break;
			}
		}
		tmp = 1;
	}

	printf("%d", res);
	return 0;
}