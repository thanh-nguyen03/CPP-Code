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

string n;
ll m;

ll chiadu(string s, ll n) {
	ll du = 0;
	for (int i = 0; i < s.size(); i++) {
		du = (du * 10 + s[i] - '0') % n;
	}
	return du;
}

void run_test_case() {
	cin >> n >> m;
	cout << chiadu(n, m) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

