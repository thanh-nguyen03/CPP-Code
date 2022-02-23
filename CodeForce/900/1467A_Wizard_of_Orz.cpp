#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void solve() {
    int n, i = 9;
    cin >> n;
    cout << i--;
    n--;
    while (n > 0) {
        if (i == 10) i = 0;
        cout << i++;
        n--;
    }
    cout << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}