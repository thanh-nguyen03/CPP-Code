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

int n, s;
void run_test_case() {
    cin >> s >> n;
    vi a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<vi> dp(n + 1, vi(s + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (j >= a[i]) {
                dp[i][j] = max(dp[i-1][j-a[i]] + a[i], dp[i-1][j]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][s];
}

int main() {
    faster();
        run_test_case();
}