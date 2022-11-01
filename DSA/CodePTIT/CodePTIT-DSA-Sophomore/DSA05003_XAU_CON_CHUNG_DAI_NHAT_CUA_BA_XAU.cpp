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

int solve(string a, string b, string c) {
    int dp[105][105][105] = {};
    int ans = 0;
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            for (int k = 1; k <= c.size(); k++) {
                if (a[i-1] == b[j-1] and a[i-1] == c[k-1]) dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                else {
                    dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
                }
                ans = max(ans, dp[i][j][k]);
            }
        }
    }
    return ans;
}

int n1, n2, n3;
string a, b, c;
void run_test_case() {
    cin >> n1 >> n2 >> n3;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}