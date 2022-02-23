#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, m, p, a[1000], b[1000];
void run_test_case() {
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	vector<int> ans;
	for (int i = 0; i < p; i++) ans.push_back(a[i]);
	for (int i = 0; i < m; i++) ans.push_back(b[i]);
	for (int i = p; i < n; i++) ans.push_back(a[i]);
	for (int x : ans) cout << x << " ";
	cout << endl;
}

int main() {
    fastread();
	int t, i = 1;
	cin >> t;
	while (t--) {
		cout << "Test " << i++ << ":" << endl;
		run_test_case();
	}
}

