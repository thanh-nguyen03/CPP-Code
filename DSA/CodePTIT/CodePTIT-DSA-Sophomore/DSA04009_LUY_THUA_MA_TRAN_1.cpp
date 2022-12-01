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

matrix I, a;
ll n, x;
void base() {
    I.assign(n, vll(n, 0));
    for (int i = 0; i < n; i++) {
        I[i][i] = 1;
    }
}

matrix matrixMultiply(matrix a, matrix b) {
    matrix c(n, vll(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += (a[i][k] * b[k][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix matrixExponential(matrix a, ll k) {
    if (k == 0) return I;
    matrix tmp = matrixExponential(a, k / 2);
    if (k & 1) return matrixMultiply(tmp, matrixMultiply(tmp, a));
    return matrixMultiply(tmp, tmp);
}

void run_test_case() {
    cin >> n >> x;
    a.assign(n, vll(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    base();
    matrix ans = matrixExponential(a, x);
    for (int i = 0; i < n; i++) {
        for (int j = 0;j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}