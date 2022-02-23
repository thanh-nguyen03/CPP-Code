#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool snt(ll n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

ll n;
void run_test_case() {
	cin >> n;
	ll sum = 0, temp = n;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	if (snt(sum)) cout << temp << endl;
	else cout << -1 << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

