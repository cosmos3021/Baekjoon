#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int isit = 1;

int sosoo(k) {
    int i = 2;
    isit = 1;

    while (1) {
        if (i <= sqrt(k)) {
            if (k % i == 0) {
                isit = 0;
                break;
            }
            else i++;
        }
        else break;
    }
    return 0;
}

int main(void) {
    int n, ic, x, f;
    int pel[7] = { 0 };
    scanf("%d", &n);

    if (n == 1) n = 2;
    if (n != 2 && n % 2 == 0) n++;

    for (int i = n;; i += 2) {
        sosoo(i); // �Ҽ����� Ȯ��
        ic = i, x = 0, f = 0;

        if (isit == 1) { // �Ҽ��� �ƴϸ� ����

            while (ic != 0) { // �迭�� �� ����ֱ�
                pel[x] = ic % 10;
                ic /= 10;
                x++;
            }

            for (int j = 0; j < x / 2; j++) { // �縰��� ����
                if (pel[j] != pel[x - j - 1]) f = 1;
            }

            if (f == 0) { // ���
                printf("%d", i);
                return 0;
            }

            else for (int j = 0; j < x; j++) pel[j] = 0;
            // �迭 �ʱ�ȭ
        }
    }
}