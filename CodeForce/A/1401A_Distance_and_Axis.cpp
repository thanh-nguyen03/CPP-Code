#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, k;

void solve() {
    cin >> n >> k;
    if (n < k) {
        cout << k - n << endl;
        return;
    }
    else {
        int sum = n + k;
        if (sum % 2 == 0) {
            cout << 0 << endl;
            return;
        }
        else {
            cout << 1 << endl;
            return;
        }
    }
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) 
        solve();
}