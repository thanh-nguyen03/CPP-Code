#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

int n, a[MAX];
void run_test_case() {
    cin >> n;
    vi b, c, d;
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] & 1) {
            b[i] = 1;
            c.pb(a[i]);
        }
        else {
            b[i] = 0;
            d.pb(a[i]);
        }
    }
    sort(all(c), greater<int>());
    sort(all(d));
    int i = 0, j = 0, s = 1;
    for (int k = 0; k < n; k++) {
        if (b[k] == 0) {
            b[k] = d[j++];
        }
        else if (b[k] == 1) {
            b[k] = c[i++];
        }
    }
    for (int k = 0; k < n; k++) {
        cout << b[k] << " ";
    }
}

int main() {
    faster();
        run_test_case();
}