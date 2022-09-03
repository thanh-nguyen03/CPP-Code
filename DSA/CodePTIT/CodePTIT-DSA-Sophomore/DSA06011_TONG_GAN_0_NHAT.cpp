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

int n, a[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    ll ans = LONG_LONG_MAX, c = LONG_LONG_MAX;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(a[i] + a[j]) < c) {
                ans = a[i] + a[j];
                c = abs(a[i] + a[j]);
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