#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int p = 1;
    for (int i = 1; i < 30; i++) {
        p += pow(2, i);
        if (n % p == 0) {
            cout << n / p << endl;
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}