#include <stdio.h>

int main () {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int arr[n + 10];
		int max = -1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			if (arr[i] > max) max = arr[i];
		}
		printf("%d\n", max);
		for (int i = 0; i < n; i++) {
			if (arr[i] == max) printf("%d ", i);
		}
		printf("\n");
	}

}

