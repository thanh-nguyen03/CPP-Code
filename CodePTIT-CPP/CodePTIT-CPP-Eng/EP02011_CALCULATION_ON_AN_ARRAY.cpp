#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll mu(ll a, ll b) {
	if (b == 0) return 1;
	ll m = 1;
	for (ll i = 1; i <= b; i++) {
		m *= a;
		m %= mod;
	}
	return m;
}

ll n, a[1000000];
void run_test_case() {
	cin >> n;
	ll g = 0; 
	ll h = 1;
	cin >> a[0];
	g = a[0]; h= a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		g = __gcd(g, a[i]);
		h *= a[i];
		h %= mod;
	}
	h = mu(h, g);
	h %= mod;
	cout << h << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

