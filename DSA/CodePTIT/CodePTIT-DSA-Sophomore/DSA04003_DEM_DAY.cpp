#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 123456789;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

ll n;
ll mu(ll a, ll k) {
    if (k == 0) return 1;
    ll val = mu(a, k / 2) % mod;
    if (k&1) return (val * a % mod) * val % mod;
    return val * val % mod;
}

void run_test_case() {
    cin >> n;
    cout << mu(2, n - 1) % mod << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}