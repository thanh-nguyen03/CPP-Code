#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[10000];

void solve() {
    bool odd = false, even = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even = true;
        else odd = true;
    }

    if (odd == true && even == true) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}