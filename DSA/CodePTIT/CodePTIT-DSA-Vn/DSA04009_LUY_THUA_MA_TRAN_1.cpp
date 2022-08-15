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

int n, k;
matrix createBase() {
    matrix I(n, vector<ll> (n, 0));
    for (int i = 0; i < n; i++) I[i][i] = 1;
    return I;
}

matrix matrixProduct(matrix a, matrix b) {
    matrix c(n, vector<ll> (n));
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

void printMatrix(matrix a) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

matrix matrixExponential(matrix a, int k) {
    if (k == 0) return createBase();
    matrix m = matrixExponential(a, k / 2);
    if (k % 2 == 0) return matrixProduct(m, m);
    return matrixProduct(m, matrixProduct(a, m));
}

void run_test_case() {
    cin >> n >> k;
    matrix a(n, vector<ll> (n));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> a[i][j];
    a = matrixExponential(a, k);
    printMatrix(a);
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}