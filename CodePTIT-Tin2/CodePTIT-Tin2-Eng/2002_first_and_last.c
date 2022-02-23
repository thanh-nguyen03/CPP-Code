#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int i = 0, last = n % 10, first = -1;
		while (n) {
			if (n >= 1 && n < 10) {
				first = n % 10;
			}
			n /= 10;
				
		}
		last == first ? printf("YES") : printf("NO");
		printf("\n");
	}
}

