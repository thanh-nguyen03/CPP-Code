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

int n, k, a[MAX];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int idx = lower_bound(a + i + 1, a + n, a[i] + k) - a;
        ans += idx - i - 1;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}