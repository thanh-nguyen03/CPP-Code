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

ll solve(int n) {
    ll f[n + 1];
    f[0] = 1; f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = 0;
        for (int j = 0; j < i; j++) {
            f[i] += f[j] * f[i - j - 1];
            f[i] %= mod;
        }
    }
    return f[n];
}

int main() {
    int n;
    cin >> n;
    n /= 2;
    cout << solve(n);
}