#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll n, a[1000000];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			ans = max(a[i] - a[j], ans);
		}
	}
	if (ans == 0) cout << -1 << endl;
	else cout << ans << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

