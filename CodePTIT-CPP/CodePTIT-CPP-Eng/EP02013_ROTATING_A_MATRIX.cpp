#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

int n, m, a[105][105], b[105][105] = {0};
void solve() {
    for (int k = 0; k < m / 2; k++) {
        for (int i = k + 1; i < m - k; i++)
            b[k][i] = a[k][i - 1];
        for (int i = k + 1; i < n - k; i++)
            b[i][m - k - 1] = a[i - 1][m - k - 1];
        for (int i = m - k - 2; i >= k; i--)
            b[n - k - 1][i] = a[n - k - 1][i + 1];
        for (int i = n - k - 2; i >= k; i--)
            b[i][k] = a[i + 1][k];
    }
}
void run_test_case() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			b[i][j] = 0;
		}
	}
	
	solve();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[i][j] == 0) b[i][j] = a[i][j];
			cout << b[i][j] << " ";
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

