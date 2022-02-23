#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool gcdSum(ll n) {
	ll temp = n, sum = 0;
	while(temp) {
		sum += temp % 10;
		temp /= 10;
	}
	return __gcd(n, sum) != 1;
}

ll n;
void run_test_case() {
	cin >> n;
	if (gcdSum(n)) {
		cout << n << endl;
	}
	else if (gcdSum(n + 1)) {
		cout << n + 1 << endl;
	}
	else cout << n + 2 << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

