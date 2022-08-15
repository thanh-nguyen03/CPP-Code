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

ll exponential(ll n, ll k) {
    if (k == 0) return 1;
    ll a = exponential(n, k / 2);
    if (k % 2 == 0) return a * a % mod;
    return a * a % mod * n % mod;
}

ll n;
void run_test_case() {
    cin >> n;
    ll tmp = n, s = 0;
    while (tmp) {
        s = s * 10 + tmp % 10;
        tmp /= 10;
    }
    cout << exponential(n, s) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}