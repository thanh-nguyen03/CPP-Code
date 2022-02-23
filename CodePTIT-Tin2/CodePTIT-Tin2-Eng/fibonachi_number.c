#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		long long arr[n + 10];
		arr[1] = 1;
		arr[2] = 1;
		for (int i = 3; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		printf("%lld\n", arr[n]);
	}
}
