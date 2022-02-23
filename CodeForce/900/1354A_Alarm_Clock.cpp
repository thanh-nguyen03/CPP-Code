#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll a, b, c, d;
void solve() {
    cin >> a >> b >> c >> d;
    if (b < a && d >= c) {
        cout << -1 << endl;
        return;
    }
    if (b >= a) {
        cout << b << endl;
        return;
    }
    ll sum = b;
    a -= b;
    ll k = a / (c - d);
    if (a % (c - d) == 0) {
        sum += k * c;
    }
    else sum += (k + 1) * c;
    cout << sum << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}