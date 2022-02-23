#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    if (n < 2020) {
        cout << "NO" << endl;
        return;
    }
    int remainder = n % 2020;
    int divide = n / 2020;
    if (remainder <= divide) {
        cout << "YES" << endl;
        return;
    }
    else {
        cout << "NO" << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) 
        solve();
}