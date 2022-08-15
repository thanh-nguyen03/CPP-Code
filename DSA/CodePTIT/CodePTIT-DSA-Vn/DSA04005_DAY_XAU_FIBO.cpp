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

ll n, k, fib[95];

void solve() {
    if (n <= 2) cout << (char)('A' + n - 1) << endl;
    else {
        if (k > fib[n - 2]) {
            k -= fib[n - 2];
            n--;
        }
        else n -= 2;
        solve();
    }
}

void run_test_case() {
    cin >> n >> k;
    fib[0] = 0; fib[1] = 1; fib[2] = 1;
    for (int i = 3; i <= 92; i++) fib[i] = fib[i - 1] + fib[i - 2];
    solve();
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}