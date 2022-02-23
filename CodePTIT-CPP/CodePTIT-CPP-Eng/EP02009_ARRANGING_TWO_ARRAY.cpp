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

int n, m, a[1000000], b[1000000];
void run_test_case() {
	cin >> n >> m;
	int mark[100000] = {0};
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mark[a[i]]++;
	}
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a, a + n);
	for (int i = 0; i < m; i++) {
		int d = mark[b[i]];
		while(d--) {
			ans.push_back(b[i]);
			mark[b[i]]--;
		}
	}
	for (int i = 0; i < n; i++) {
		if (mark[a[i]] != 0) ans.push_back(a[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

