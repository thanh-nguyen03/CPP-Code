#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n;
void run_test_case() {
	ll x, y;
	cin >> n;
	int tmp = n;
	vector<pair<ll , ll>> v;
	while (tmp--) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	ll s1 = 0, s2 = 0;
	v.push_back(make_pair(v[0].first, v[0].second));
	for (int i = 0; i < n; i++) {
		s1 += v[i].first * v[i + 1].second;
		s2 += v[i].second * v[i + 1].first;
	}
	db s = abs(s2 - s1);
	cout << fixed << setprecision(3) << s / 2 << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}


