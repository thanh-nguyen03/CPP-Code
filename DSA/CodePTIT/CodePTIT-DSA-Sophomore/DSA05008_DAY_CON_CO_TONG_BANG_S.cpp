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
vi a;
void run_test_case() {
    cin >> n >> s;
    a.resize(n, 0);
    for (auto &i:a) cin >> i;
    vi dp(s + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (!dp[j] && dp[j-a[i]]) {
                dp[j] = 1;
            }
        }
    }
    if (dp[s]) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    faster();
    tester() 
        run_test_case();
}