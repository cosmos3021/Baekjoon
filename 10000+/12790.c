#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hp_b, hp_j, hp, mp_b, mp_j, mp, at_b, at_j, at, sh_b, sh_j, sh, t, sum;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d %d %d", &hp_b, &mp_b, &at_b, &sh_b, &hp_j, &mp_j, &at_j, &sh_j);

		hp = hp_b + hp_j;
		if (hp < 1) hp = 1;

		mp = mp_b + mp_j;
		if (mp < 1) mp = 1;

		at = at_b + at_j;
		if (at < 0) at = 0;

		sh = sh_b + sh_j;

		sum = hp + 5 * mp + 2 * at + 2 * sh;

		printf("%d\n", sum);
	}

	return 0;
}