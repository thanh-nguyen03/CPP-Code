#include <stdio.h>

int digit(int n) {
	while (n) {
		if (n % 10 == 6) return 1;

		n /= 10;
	}

	return 0;
}

int palSum(int n) {
	int temp = n, sum = 0, r = 0;

	while (temp) {
		sum += temp % 10;
		r = r*10 + temp % 10;

		temp /= 10;
	}

	if (sum % 10 != 8) return 0;
	if (r != n) return 0;

	return 1;
} 

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	int m = a > b ? a : b;
	int n = a < b ? a : b;

	for (int i = n; i <= m; i++) {
		if (digit(i) == 1) {
			if (palSum(i) == 1) {
				printf("%d ", i);
			}
		}
	}
}

