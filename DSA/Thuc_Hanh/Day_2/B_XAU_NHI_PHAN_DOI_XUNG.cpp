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
int a, b;
vector<vi> dp(5000, vi(5000, 0));
void dynamic() {
    for (int i = 0; i < s.size(); i++) {
        dp[i][i] = 1;
    }
    for (int i = 1; i < s.size(); i++) {
        for (int j = 0; j < s.size() - 1; j++) {
            int k = j + i;
            if (k < s.size()) {
                dp[j][k] = ((j + 1 > k - 1 || dp[j + 1][k - 1]) && s[j] == s[k]);
            }
        }
    }
}

void run_test_case() {
    cin >> a >> b;
    // cout << a << "-" << b;
    if (dp[a-1][b-1] == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    faster();
    cin >> s;
    dynamic();
    tester() 
        run_test_case();
}