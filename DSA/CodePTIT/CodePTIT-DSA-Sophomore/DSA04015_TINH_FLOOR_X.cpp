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

ll n, k, a[MAX];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = 1e18;
    if (a[0] > k) {
        cout << -1 << endl;
        return;
    }
    int ans = lower_bound(a, a + n + 1, k) - a;
    if (a[ans] != k) ans--;
    cout << ans + 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}