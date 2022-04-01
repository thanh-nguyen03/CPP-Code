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

int n, a[1000000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    if (a[n - 1] - a[n - 2] > 1) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}