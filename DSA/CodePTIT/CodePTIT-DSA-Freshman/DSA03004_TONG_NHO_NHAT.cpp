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
    ll c = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) c = c * 10 + a[i];
        else d = d * 10 + a[i];
    }
    cout << c + d << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}