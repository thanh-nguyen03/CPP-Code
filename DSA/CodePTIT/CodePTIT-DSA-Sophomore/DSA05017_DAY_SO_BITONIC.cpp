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
    for (int i = 0; i < n; i++) cin >> a[i];
    vi c(n, 0), d(n, 0), e(n, 0);
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                c[i] = max(c[i], c[j] + a[i]);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        d[i] = a[i];
        for (int j = n - 1; j >= i; j--) {
            if (a[i] > a[j]) {
                d[i] = max(d[i], d[j] + a[i]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        e[i] = c[i] + d[i] - a[i]; 
    }
    cout << *max_element(all(e)) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}