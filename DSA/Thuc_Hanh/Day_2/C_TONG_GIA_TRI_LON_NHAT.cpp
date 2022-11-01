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

int main() {
    int n, m;
    cin >> n >> m;
    vll a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    vector<vll> dp(n, vector<ll>(m + 1, 0));
    for (int i = 0; i < m; i++) {
        dp[0][i] = 0;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] <= j) dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + b[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n-1][m] << endl;
}