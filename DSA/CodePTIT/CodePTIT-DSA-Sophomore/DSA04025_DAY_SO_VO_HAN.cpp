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

int n;
matrix a = {
    {1, 1},
    {1, 0}
};
matrix I = {
    {1, 0},
    {0, 1}
};

matrix mul(matrix a, matrix b) {
    matrix c(2, vll(2));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++) {
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
    cin >> n;
    matrix b = power(a, n);
    cout << b[0][1] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}