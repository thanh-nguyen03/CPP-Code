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

bool check(vector<int> a) {
	if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4]) return true;
	if (a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return true;
	for (int x : a) {
		if (x != 6 && x != 8) return false;
	}
	return true;
}

string s;
void run_test_case() {
	cin >> s;
	vector<int> v;
	for (int i = 5; i < s.length(); i++) {
		if (s[i] == '.') continue;
		v.push_back(s[i] - '0');
	}
	if (check(v)) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

