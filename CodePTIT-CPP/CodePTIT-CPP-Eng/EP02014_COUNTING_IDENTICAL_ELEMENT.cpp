#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[105][105], b[1000000];
void run_test_case() {
	cin >> n;
	memset(b, 0, (int)1e6);
	int count = 0;
	for (int i = 0; i < n; i++) {
		set<int> s;
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			s.insert(a[i][j]);
		}
		for (auto e : s) {
			b[e]++;
			if (b[e] == n) count++;
		}
	}
	cout << count << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--) 
		run_test_case();
}

