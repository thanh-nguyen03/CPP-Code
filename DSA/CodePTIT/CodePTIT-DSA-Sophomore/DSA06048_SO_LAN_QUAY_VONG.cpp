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

ll n, a[MAX];
void run_test_case() {
    cin >> n;
    ll m = LONG_LONG_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = min(m, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == m) cout << i << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}