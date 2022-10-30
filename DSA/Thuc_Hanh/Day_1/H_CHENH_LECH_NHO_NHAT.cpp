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

int n, k, ans;
vi x, vs;
vector<string> s;

void init() {
    cin >> n >> k;
    s.resize(n);
    x.resize(k);
    vs.resize(k);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    ans = INT_MAX;
}

int calc(string s) {
    int tmp = 0;
    for (int i = 0; i < s.size(); i++) {
        tmp = tmp * 10 + (s[x[i]] - '0');
    }
    return tmp;
}

void solve() {
    int ma = 0, mi = INT_MAX;
    for (int i = 0; i < n; i++) {
        int tmp = calc(s[i]);
        ma = max(ma, tmp);
        mi = min(mi, tmp);
    }
    ans = min(ans, ma - mi);
}

void backtrack(int i) {
    for (int j = 0; j < k; j++) {
        if (!vs[j]) {
            x[i] = j;
            vs[j] = 1;
            if (i == k - 1) solve();
            else backtrack(i + 1);
            vs[j] = 0;
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << ans << endl;
}

int main() {
    faster();
        run_test_case();
}