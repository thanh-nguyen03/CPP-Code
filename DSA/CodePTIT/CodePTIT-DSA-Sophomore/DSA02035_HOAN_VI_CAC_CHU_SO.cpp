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

ll n, k, ans;
vector<string> a;
vi x, vs;
void init() {
    cin >> n >> k;
    a.resize(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ans = LONG_LONG_MAX;
    x.resize(k);
    vs.resize(k + 1, 0);
}

ll calc(string s) {
    ll res = 0;
    for (int i = 0; i < s.size(); i++) {
        res = res*10 + (s[x[i] - 1] - '0');
    }
    return res;
}

void solve() {
    ll maxx = 0, minn = INT_MAX;
    for (int i = 0; i < n; i++) {
        ll tmp = calc(a[i]);
        maxx = max(maxx, tmp);
        minn = min(minn, tmp);
    }
    ans = min(maxx - minn, ans);
}

void backtrack(int i) {
    for (int j = 1; j <= k; j++) {
        if (!vs[j]) {
            x[i] = j;
            vs[j] = 1;
            if (i == k - 1) {
                solve();
            }
            else backtrack(i + 1);
            vs[j] = 0;
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << ans;
}

int main() {
    faster();
        run_test_case();
}