#include <stdio.h>

int main(void) {
    int n, i;
    int min = 1000001;
    int max = -1000001;

    int arr[1000001] = { 0 };

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}