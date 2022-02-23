#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int a, b, c;

void solve() {
    cin >> a >> b >> c;
    int a1, b1, c1;
    a1 = b - (c - b);
    if (a1 >= a && a1 % a == 0 && a1 != 0) {
        cout << "YES" << endl;
        return;
    }

    b1 = (a + c) / 2;
    if (b1 >= b &&b1 % b == 0 && (a + c) % 2 == 0 && b1 != 0) {
        cout << "YES" << endl;
        return;
    }
    c1 = a + 2 * (b - a);
    if (c1 >= c && c1 % c == 0 && c1 != 0) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}