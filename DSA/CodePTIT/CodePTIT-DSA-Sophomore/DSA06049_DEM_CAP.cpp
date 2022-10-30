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
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    sort(all(a));
    for (int i = 0; i < n - 1; i++) {
        int pos = lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - a.begin();
		ans += pos - i - 1;
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}