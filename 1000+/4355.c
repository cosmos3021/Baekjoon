#define CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(void) {
    long long n, k = 2, cnt = 0, sum;

    while (1) {
        scanf("%lld", &n);
        sum = n;

        if (n == 0) return 0;

        if (n != 1) {
            while (n != 1) {
                if (n % k != 0) {
                    if (cnt > 0) {
                        sum *= k - 1;
                        sum /= k;
                    }
                    cnt = 0;
                    k++;
                }
                else {
                    n /= k;
                    cnt++;
                }
            }

            sum *= k - 1;
            sum /= k;
            printf("%lld\n", sum);
            k = 2, cnt = 0;
        }
        else printf("%d\n", 1);
    }
}