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

string s;
void run_test_case() {
    cin >> s;
    int n = s.size();
    vector<vi> dp(n, vi(n));
    int ans = 1;
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            int k = i + j;
            dp[j][k] = ((j + 1 > k - 1 || dp[j+1][k-1]) && s[j] == s[k]);
            if (dp[j][k]) {
                ans = i + 1;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}