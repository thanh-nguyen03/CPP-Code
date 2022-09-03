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

ll dp[MAX] = {};
void dynamic() {
    dp[1] = dp[2] = dp[3] = 1;
    for (int i = 4; i < MAX; i++) {
        if (i % 6 == 0) dp[i] = min(dp[i/2], min(dp[i/3], dp[i-1])) + 1;
        else if (i % 3 == 0) dp[i] = min(dp[i/3], dp[i-1]) + 1;
        else if (i % 2 == 0) dp[i] = min(dp[i/2], dp[i-1]) + 1;
        else dp[i] = dp[i-1] + 1;
    }
}

int n;
void run_test_case() {
    cin >> n;
    cout << dp[n] << endl;
}

int main() {
    dynamic();
    faster();
    tester() 
        run_test_case();
}