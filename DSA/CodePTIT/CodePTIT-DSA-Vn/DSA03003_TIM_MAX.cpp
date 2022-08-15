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

ll n, a[100000];

ll calc() {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * i % mod;
        sum %= mod;
    }
    return sum;
}

void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << calc() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}