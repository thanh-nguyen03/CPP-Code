#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int in_top = a + b, in_low = a - b, out_top = c + d, out_low = c - d;
    int top = n * in_top, low = n * in_low;
    if (out_low <= top && out_top >= low) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}