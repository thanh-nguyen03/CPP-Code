#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int n, a[1000000];
void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 1e9;
    for (int i = 1; i < n; i++) {
        ans = min(ans, a[i] - a[i - 1]);
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