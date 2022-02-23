#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

string s;
int k;
void run_test_case() {
	cin >> s >> k;
	int len = s.length();
	set<char> c;
	for (int i = 0; i < len; i++) {
		c.insert(s[i]);
	}
	if (26 - c.size() <= k) cout << 1 << endl;
	else cout << 0 << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

