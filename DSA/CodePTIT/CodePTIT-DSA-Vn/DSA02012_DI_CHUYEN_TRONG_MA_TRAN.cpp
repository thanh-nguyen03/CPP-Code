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
#define pb push_back

int n, m, a[105][105], ans = 0;

void dfs(int i, int j) {
    if (i == m || j == n) return;
    if (i == m - 1 && j == n - 1) {
        ans++;
        return;
    }
    dfs(i, j + 1);
    dfs(i + 1, j);
}

void run_test_case() {
    ans = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    dfs(0, 0);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        run_test_case();
}