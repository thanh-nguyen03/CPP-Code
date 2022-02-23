#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

void solve() {
    int n;
    cin >> n;
    int a[n], m = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = max(m, a[i]);
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != m) continue;
        if (a[i - 1] != m && i > 0) {
            ans = i + 1; // +1 is because the problem count index from 1
            break;
        }
        if (a[i + 1] != m && i < n - 1) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}