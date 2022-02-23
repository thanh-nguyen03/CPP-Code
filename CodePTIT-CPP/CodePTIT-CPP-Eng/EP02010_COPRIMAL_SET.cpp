#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll n, m;
void run_test_case() {
	cin >> n >> m;
	ll sum = n*(n + 1) / 2;
	if (sum < m) {
		cout << "No" << endl;
		return;
	}
	ll a = (sum + m) / 2, b = sum - a;
	if (a - b != m) {
	    cout << "No" << endl;
	    return;
	}
	if (__gcd(a, b) == 1) {
		cout << "Yes" << endl;
		return;
	}
	cout << "No" << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}
