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

vector<vll> dp(1005, vector<ll>(1005, 1));
void solve() {
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j < i; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % mod;
        }
    }
}

int n, k;
void run_test_case() {
    cin >> n >> k;
    cout << dp[n][k] << endl;
}

int main() {
    solve();
    faster();
    tester() 
        run_test_case();
}