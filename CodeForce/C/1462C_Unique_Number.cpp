#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    if (n > 45) {
        cout << -1 << endl;
        return;
    }
    int countDigits = 0, temp = n, value = 9;
    while (n > 0) {
        n -= value--;
        countDigits++;
    }
    int res[10], v = temp >= 10 ? 9 : temp, index = countDigits;
    while (temp > 0) {
        res[index--] = v;
        temp -= v;
        if (index != 1) {
            v--;
        }
        else v = temp;
    }
    for (int i = 1; i <= countDigits; i++) cout << res[i];
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}