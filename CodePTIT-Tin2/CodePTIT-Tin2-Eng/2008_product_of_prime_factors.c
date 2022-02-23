#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int flag = 0;
		long long p = 1;
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				flag = 1;
				n /= i;
			}
			if (flag) p *= i;
			flag = 0;
		}
		printf("%lld\n", p);
	}
}

