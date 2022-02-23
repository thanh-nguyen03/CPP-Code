#include <stdio.h>


int main() {
	// Sang nguyen to
	int s[100100] = {0};
	for (int i = 2; i <= 10000; i++) {
		if (s[i] == 0) {
			for (int j = i*i; j <= 10000; j += i) {
				s[j] = 1;
			}
		}
	}

	
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			if (s[arr[i]] == 0 && arr[i] != 1 && arr[i] != 0) printf("%d ", arr[i]);
		}
		printf("\n");
	}
}

