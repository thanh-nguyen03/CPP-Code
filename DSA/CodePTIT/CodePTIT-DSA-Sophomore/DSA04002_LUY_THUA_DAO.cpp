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

ll mu(ll a, ll k) {
    if (k == 0) return 1;
    ll val = mu(a, k / 2);
    if (k&1) return val * val % mod * a % mod;
    return val * val % mod;
}

ll pal(ll n) {
    ll a = 0;
    while (n) {
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}

ll n;
void run_test_case() {
    cin >> n;
    cout << mu(n, pal(n)) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}