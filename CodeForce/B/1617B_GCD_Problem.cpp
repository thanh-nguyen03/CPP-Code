#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n;
void solve() {
    cin >> n;
    if (n & 1) {
        int b = n / 2;
        if (b & 1) cout << b - 2 << " " << b + 2 << " " << 1 << endl;
        else cout << b - 1 << " " << b + 1 << " " << 1 << endl;
    }
    else cout << (n / 2) << " " << (n / 2) - 1 << " " << 1 << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}