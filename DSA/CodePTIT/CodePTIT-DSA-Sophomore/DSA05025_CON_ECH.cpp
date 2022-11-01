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

vll ans {0, 1, 2, 4};
void solve() {
    for (int i = 4; i <= 50; i++) {
        ans.pb(ans[i-1] + ans[i-2] + ans[i-3]);
    }
}
int n;
void run_test_case() {
    cin >> n;
    cout << ans[n] << endl;
}

int main() {
    faster();
    solve();
    tester() 
        run_test_case();
}