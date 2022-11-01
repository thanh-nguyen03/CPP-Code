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

int n, k;
void run_test_case() {
    cin >> n >> k;
    vll dp(n + 5, 0);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            dp[i] += dp[i-j];
            dp[i] %= mod;
        }
    }
    cout << dp[n] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}