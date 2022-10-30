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
#define matrix vector<vll>

ll n, k;
matrix I;
matrix a;

void createBase() {
    I.clear();
    I.resize(n, vll(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) I[i][j] = 1;
            else I[i][j] = 0;
        }
    }
}

matrix mul(matrix a, matrix b) {
    matrix c(n, vll(n));
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

matrix power(matrix a, ll k) {
    if (k == 0) return I;
    matrix x = power(a, k / 2);
    if (k % 2 == 0) return mul(x, x);
    return mul(x, mul(x, a));
}

void run_test_case() {
    cin >> n >> k;
    createBase();
    a.clear();
    a.resize(n, vll(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    matrix b = power(a, k);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += b[i][n - 1];
        ans %= mod;
    }
    cout << ans << endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int main() {
    faster();
    tester() 
        run_test_case();
}