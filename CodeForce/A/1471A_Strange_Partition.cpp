#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, x, a;
void solve() {
    cin >> n >> x;
    ll max = 0, min, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        max += a / x;
        if (a % x != 0) max++;
    }
    min = sum / x;
    if (sum % x != 0) {
        min++;
    }
    cout << min << " " << max << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while(t--)
        solve();
}