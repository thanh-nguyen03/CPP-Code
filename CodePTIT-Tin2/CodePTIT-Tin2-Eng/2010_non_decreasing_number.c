#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		long long n; scanf("%lld", &n);
		int flag = 1;
		while (n) {
			long long last = n % 10;
			n /= 10;
			long long s_last = n % 10;
			if (last < s_last) {
				flag = 0;
				break;
			}
		}
		flag == 1 ? printf("YES") : printf("NO");
		printf("\n");
	}
}

