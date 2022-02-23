#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    while (n) {
        if (n < 10) {
            sum += n;
            break;
        }
        else {
            int spend = n / 10;
            sum += spend * 10;
            n %= 10;
            n += spend;
        }
    }

    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}