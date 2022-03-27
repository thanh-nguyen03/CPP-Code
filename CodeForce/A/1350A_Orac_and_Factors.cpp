#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, k;

int checkPrime(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return i;
    }
    return 0;
}

void solve() {
    cin >> n >> k;
    int check = checkPrime(n);
    if (check == 0) {
        n *= 2;
        k--;
        while (k--) n += 2;
        cout << n << endl;
    }
    else {
        n += check;
        k--;
        while (k--) n += 2;
        cout << n << endl;
    }
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}