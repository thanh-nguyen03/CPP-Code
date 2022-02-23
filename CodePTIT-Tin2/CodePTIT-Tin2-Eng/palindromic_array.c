#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int arr[n + 10], flag = 1;
		for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
		for (int i = 0; i <= n / 2; i++) {
			if (arr[i] != arr[n - 1 - i]) {
				flag = 0;
				break;
			}
		}
		flag == 1 ? printf("YES") : printf("NO");
		printf("\n");
	}
}

