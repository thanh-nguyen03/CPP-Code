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

bool check(ll n) {
	if (n % 2 != 0) return 0;
	while (n) {
		int last = n % 10;
		if (last % 2 != 0) return 0;
		n /= 10;
	}
	return 1;
}

ll n;
void run_test_case() {
	cin >> n;
	bool ok = check(n);
	ok == 1 ? cout << "YES" : cout << "NO";
	cout << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

