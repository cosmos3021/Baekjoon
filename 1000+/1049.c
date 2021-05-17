#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, m, pac, nat, pac_min = 1000, nat_min = 1000, i, rdr, drd, sum;
    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++) {
        scanf("%d %d", &pac, &nat);
        if (pac_min > pac) pac_min = pac;
        if (nat_min > nat) nat_min = nat;
    }

    rdr = n / 6;
    drd = n % 6;

    if ((rdr + 1) * pac_min > n * nat_min) sum = n * nat_min;
    else sum = (rdr + 1) * pac_min;

    if (sum > rdr * pac_min + drd * nat_min) sum = rdr * pac_min + drd * nat_min;

    printf("%d", sum);
    return 0;
}