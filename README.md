# Baekjoon

It's my workspace to solve problems of Baekjoon Online Judge.

= memo =
== qsort ==
void qsorttt(int * arr, int left, int right) {
	if (left >= right) return 0;

	int pivot = left, L = left + 1, R = right, tmp;

	while (L <= R) {
		while (L <= R && arr[L] <= arr[pivot]) L++;
		while (R > left && arr[R] >= arr[pivot]) R--;
		if (L > R) {
			tmp = arr[R];
			arr[R] = arr[pivot];
			arr[pivot] = tmp;
		}
		else {
			tmp = arr[L];
			arr[L] = arr[R];
			arr[R] = tmp;
		}
	}
	qsorttt(arr, left, R - 1);
	qsorttt(arr, R + 1, right);
}
