#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[1000000];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int ans = 1e8;
	for (int i = 1; i < n; i++) {
		if (a[i] - a[i - 1] < ans) ans = a[i] - a[i - 1];
	}
	cout << ans << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

