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
#define matrix vector<vector<ll>>

matrix I = {{1, 0}, {0, 1}};
matrix a = {{1, 1}, {1, 0}};

matrix matrixProduct(matrix a, matrix b) {
    matrix c(2, vector<ll> (2));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] += (a[i][k] * b[k][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix matrixExponetial(matrix a, int k) {
    if (k == 0) return I;
    matrix val = matrixExponetial(a, k / 2);
    if (k % 2 == 0) return matrixProduct(val, val);
    return matrixProduct(val, matrixProduct(val, a));
}

int n;
void run_test_case() {
    cin >> n;
    matrix res = matrixExponetial(a, n);
    cout << res[0][1] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}