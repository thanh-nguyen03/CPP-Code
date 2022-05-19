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
#define matrix vector<vector<ll>>

matrix I = {{1, 0}, {0, 1}};
matrix a = {{1, 1}, {1, 0}};

matrix nhanMaTran(matrix a, matrix b) {
    matrix c(2, vector<ll>(2));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix luyThuaMaTran(matrix a, ll k) {
    if (k == 0) return I;
    matrix tmp = luyThuaMaTran(a, k / 2);
    if (k % 2 == 0) return nhanMaTran(tmp, tmp);
    return nhanMaTran(a, nhanMaTran(tmp, tmp));
}

ll n;
void run_test_case() {
    cin >> n;
    matrix ans = luyThuaMaTran(a, n);
    cout << ans[1][0] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}