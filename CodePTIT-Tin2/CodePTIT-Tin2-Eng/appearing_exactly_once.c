#include <stdio.h>
int main() {
	int n; scanf("%d", &n);
	int arr[n + 10];
	int b[100000];
	int count = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		b[arr[i]]++;
		if (b[arr[i]] == 2) count -= 2;
		if (b[arr[i]] > 2) count--;
	}
	printf("%d\n", count);
	for (int i = 0; i < n; i++) {
		if (b[arr[i]] == 1) printf("%d ", arr[i]);
	}
}

