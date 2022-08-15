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

int n, k, a[10000];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll l1 = 0, r1 = 0, l2 = 0, r2 = 0;
    for (int i = 0; i < k; i++) l1 += a[i];
    for (int i = k; i < n; i++) r1 += a[i];
    for (int i = 0; i < n -  k; i++) l2 += a[i];
    for (int i = n - k; i < n; i++) r2 += a[i];
    cout << max(abs(l1 - r1), abs(l2 - r2)) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}