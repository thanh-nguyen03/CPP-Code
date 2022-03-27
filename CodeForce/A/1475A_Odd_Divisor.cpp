#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    if (n % 2 != 0) {
        cout << "YES" << endl;
        return;
    }
    while (n % 2 == 0) n /= 2;
    if (n > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
        solve();
}