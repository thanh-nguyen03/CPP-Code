#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 998244353;
#define pb push_back

int n;
ll p[1010] = {1};
void permutation() {
    p[0] = 1;
    for (int i = 1; i <= 1000; i++) {
        p[i] = p[i - 1] * i;
        p[i] %= mod;
    }
}

void run_test_case() {
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    }
    cout << p[n / 2] * p[n / 2] % mod << endl;
}

int main() {
    permutation();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}