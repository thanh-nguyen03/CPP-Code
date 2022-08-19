#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

int m, n, a[200][200], ans;
void init() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    ans = 0;
}

void backtrack(int i, int j) {
    if (i < 0 || i == m || j < 0 || j == n) return;
    if (i == m - 1 && j == n - 1) {
        ans++;
        return;
    }
    backtrack(i + 1, j);
    backtrack(i, j + 1);
}

void run_test_case() {
    init();
    backtrack(0, 0);
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}