#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void solve() {
    int n;
    cin >> n;
    ll a[n], spare = 0;
    bool check = true;
    cin >> a[0];
    spare = a[0];
    a[0] = 0;
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] > a[i - 1]) {
            spare += a[i] - (a[i - 1] + 1);
            a[i] = a[i - 1] + 1;
        }  
        else if (a[i] == a[i - 1]) {
            if (spare > 0) {
                spare--;
                a[i]++;   
            }
        }
        else {
            ll g = a[i - 1] - a[i] + 1;
            if (g <= spare) {
                a[i] += g;
                spare -= g;
            }
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            check = false;
            break;
        }
    }
    if (check) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while(t--)
        solve();
}