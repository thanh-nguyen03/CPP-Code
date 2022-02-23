#include <stdio.h>
#include <math.h>

typedef long long ll;

int primeCheck(ll n) {
	if (n < 2) return 0;
	if (n == 2 || n == 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;

	for (ll i = 5; i <= sqrt(n); i += 6) {
		if (n % i == 0) return 0;
		if (n % (i + 2) == 0) return 0;
	}

	return 1;
}

int main() {
	int n; scanf("%d", &n);
	if (n >= 1) printf("2\n");
	n--;
	for (ll i = 3; n != 0; i += 2) {
		if (primeCheck(i)) {
			printf("%lld\n", i);
			n--;
		}
	}
}
