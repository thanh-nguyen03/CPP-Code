#include <stdio.h>
#include <math.h>

int checkPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int checkPalindrome(int n) {
	int temp = n, sum = 0;
	
	while (temp) {
		sum = sum*10 + temp % 10;
		temp /= 10;
	}
	if (sum == n) return 1;
	else return 0;
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int a, b; scanf("%d%d", &a, &b);
		int count = 0;
		for (int i = a; i <= b; i++) {
			if (checkPrime(i) == 1 && checkPalindrome(i) == 1) {
				count++;
				printf("%d ", i);
				if (count % 10 == 0) printf("\n");
			}
		}
	
		printf("\n");
	}
}

