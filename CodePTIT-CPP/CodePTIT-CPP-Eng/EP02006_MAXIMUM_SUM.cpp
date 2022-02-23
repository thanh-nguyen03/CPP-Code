#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, m, a[100000], b[100000];
void run_test_case() {
	cin >> n >> m;
	ll aSumLeft = 0, aSumRight = 0, bSumLeft = 0, bSumRight = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		aSumRight += a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		bSumRight += b[i];
	}
	int loop = n < m ? n : m;
	ll ans = 0;
	for (int i = 0; i < loop; i++) {
		aSumLeft += a[i];
		aSumRight -= a[i];
		bSumLeft += b[i];
		bSumRight -= b[i];
		
		ll maxLeft = aSumLeft > bSumLeft ? aSumLeft : bSumLeft;
		ll maxRight = aSumRight > bSumRight ? aSumRight : bSumRight;
		
		ll max = maxLeft + maxRight;
		if (max > ans) ans = max;
	}
	cout << ans << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

