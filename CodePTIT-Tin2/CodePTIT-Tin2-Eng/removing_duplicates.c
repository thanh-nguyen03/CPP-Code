#include <stdio.h>
int main() {
	int n; scanf("%d", &n);
	int arr[n + 10], b[100000] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		b[arr[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (b[arr[i]] != -1) {
			printf("%d ", arr[i]);
			b[arr[i]] = -1;
		}
	}
}

