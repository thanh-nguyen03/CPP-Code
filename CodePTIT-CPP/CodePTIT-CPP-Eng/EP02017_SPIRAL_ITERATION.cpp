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


int m, n, k, a[105][105];
int solve() {
	int T = 0, B = m - 1, L = 0, R = n - 1, dir = 0; // dir: 0 to right // 1 down // 2 to left // 3 up
	while (T <= B && L <= R) {
		if (dir == 0) {
			for (int i = L; i <= R; i++) {
				k--;
				if (k == 0) return a[T][i];
			}
			T++;
			dir = 1;
		}
		if (dir == 1) {
			for (int i = T; i <= B; i++) {
				k--;
				if (k == 0) return a[i][R];
			}
			R--;
			dir = 2;
		}
		if (dir == 2) {
			for (int i = R; i >= L; i--) {
				k--;
				if (k == 0) return a[B][i];
			}
			B--;
			dir = 3;
		}
		if (dir == 3) {
			for (int i = B; i >= T; i--) {
				k--;
				if (k == 0) return a[i][L];
			}
			L++;
			dir = 0;
		}
	}
}
void run_test_case() {
	cin >> m >> n >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int ans = solve();
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		run_test_case();
}

