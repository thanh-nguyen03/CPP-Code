#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    ll n, a, count = 0, pro = 1;
    bool neg = false, zero = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) zero = true;
        if (a < 0) {
            count += abs(-1 - a);
            pro *= -1;
        }
        else {
            count += abs(1 - a);
        }
    }
    if (pro == -1) {
        if (zero) {
            cout << count;
            return 0;
        }
        else cout << count + 2;
        return 0;
    }
    cout << count;
}