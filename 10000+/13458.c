#include <stdio.h>
#include <math.h>

int main(void) {
    int n, a, b, c, i;
    long long dire = 0;
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);

        arr[i] = a;
    }

    scanf("%d %d", &b, &c);

    for (i = 0; i < n; i++)
    {
        dire += 1;
        arr[i] -= b;

        if (arr[i] > 0)
        {
            dire += ceil(arr[i] * 1.0 / c);
        }
    }

    printf("%lld\n", dire);

    free(arr);
    return 0;
}