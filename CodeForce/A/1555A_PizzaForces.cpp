#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll n;
void solve() {
    cin >> n;
    if (n % 2 != 0) n++;
    if (n < 6) {
        cout << 6 / 2 * 5 << endl;
        return;
    }
    cout << n / 2 * 5 << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}