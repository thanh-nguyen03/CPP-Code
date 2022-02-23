#include <stdio.h>
#include <math.h>

typedef long long ll;

ll pF(ll n) {
    ll max = -1;
	while (n % 2 == 0) {
        max = 2;
		n /= 2;
	}
    while (n % 3 == 0) {
        max = 3;
        n /= 3;
    }

	for (ll i = 5; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
            max = i;
			n /= i;
		}
	}

    if (n > 4) {
        max = n;
    }
	return max;
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		ll n; scanf("%lld", &n);
		printf("%lld\n", pF(n));
	}
}