#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
	ll a[100], m = 1e8;;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		m = min(m, a[i]);
	}
	ll ans = a[0] - m;
	for (int i = 1; i < 4; i++) {
		ans = __gcd(ans, a[i] - m);
	}
	cout << ans;
}

