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

int n, a[105][105];
int ans = INT_MAX, s = 0, m = INT_MAX;
vi vs, x;
void init() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j]) m = min(m, a[i][j]);
        }
    }
    vs.assign(n + 1, 0);
    x.resize(n + 1, 0);
    x[1] = 1;
    vs[1] = 1;
}

void backtrack(int i) {
    if (s + (n - i + 1)*m >= ans) return;
    for (int j = 2; j <= n; j++) {
        if (!vs[j]) {
            x[i] = j;
            vs[j] = 1;
            s += a[x[i-1]][j];
            if (i == n) {
                ans = min(ans, s + a[x[n]][x[1]]);
            }
            else backtrack(i+1);
            s -= a[x[i-1]][j];
            vs[j] = 0;
        }
    }
}

void run_test_case() {
    init();
    backtrack(2);
    cout << ans;
}

int main() {
    faster();
        run_test_case();
}