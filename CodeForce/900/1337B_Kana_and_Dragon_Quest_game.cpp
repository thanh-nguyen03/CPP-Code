#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
        while (x >= 20 && n > 0) {
            x /= 2;
            x += 10;
            n--;
        }
        while (m > 0) {
            x -= 10;
            m--;
        }

        if (x > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}