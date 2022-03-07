#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

int n, k;
vector<vector<ll>> I;
void createBase() {
    for (int i = 0; i < n; i++) {
        vector<ll> tmp;
        for (int j = 0; j < n; j++) {
            if (i == j) tmp.pb(1);
            else tmp.pb(0);
        }
        I.pb(tmp);
        tmp.clear();
    }
}

vector<vector<ll>> matrixProduct(vector<vector<ll>> a, vector<vector<ll>> b) {
    vector<vector<ll>> c(n, vector<ll> (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += (a[i][k] * b[k][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

vector<vector<ll>> matrixExponetial(vector<vector<ll>> a, int k) {
    if (k == 0) return I;
    vector<vector<ll>> m = matrixExponetial(a, k / 2);
    if (k % 2 == 0) return matrixProduct(m, m);
    return matrixProduct(m, matrixProduct(m, a));
}

void solve(vector<vector<ll>> a) {
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i][n - 1];
        ans %= mod;
    }
    cout << ans << endl;
}

void run_test_case() {
    I.clear();
    cin >> n >> k;
    vector<ll> tmp;
    ll x;
    vector<vector<ll>> a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;
            tmp.pb(x);
        }
        a.pb(tmp);
        tmp.clear();
    }
    createBase();
    a = matrixExponetial(a, k);
    solve(a);
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}