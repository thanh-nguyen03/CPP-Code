#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n, count = 0; scanf("%d", &n);
		for (int i = 1; i <= sqrt(n); i++) {
			if (n % i == 0) {
				int q = n / i;
				if (i % 2 == 0) count++;
				if (q % 2 == 0 && q != i) count++;
			}
		}
		printf("%d\n", count);
	}
}

/*
	6
	1 2 sqrt(6) 3 6 
	sqrt(6) = 2.44
	9
	1 3 9
*/