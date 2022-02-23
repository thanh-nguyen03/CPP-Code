#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, x, a[100000];
void run_test_case() {
	cin >> n >> x;
	ll sum = 0, p = 1;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		sum += a[i] * p;
		sum %= mod;
		p *= x;
		p %= mod;
	}
	cout << sum << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

