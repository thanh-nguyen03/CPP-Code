#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll x, y, z, n;
void run_test_case() {
    cin >> x >> y >> z >> n;
    ll b1 = x * y / gcd(x , y);
    ll b = b1 * z / gcd(b1, z);

    db low = pow(10, n - 1), high = pow(10, n);
    if (b > high) {
        cout << "-1\n";
        return;
    }
    else {
        ll step = low / b;
        if ((ll)low % b != 0) step++;
        cout << b * step << endl;
        return;
    }
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) 
        run_test_case();
}