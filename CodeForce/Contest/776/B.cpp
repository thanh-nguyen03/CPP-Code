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

ll r, l, a;
void run_test_case() {
    cin >> l >> r >> a;
    ll tmp = ((r / a) * a) - 1;
    ll sum = (tmp / a) + (tmp % a);
    ll sum2 = (r / a) + (r % a);
    if (tmp < l) {
        cout << sum2 << endl;
        return;
    }
    cout << max(sum, sum2) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}