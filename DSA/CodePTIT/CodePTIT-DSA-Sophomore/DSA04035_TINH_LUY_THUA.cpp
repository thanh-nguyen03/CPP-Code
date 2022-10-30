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

ll power(ll a, ll k) {
    if (k == 0) return 1;
    ll x = power(a, k / 2);
    if (k % 2 == 0) return x * x % mod;
    return (x * x % mod) * a % mod;
}

int main() {
    ll a, b;
    do {
        cin >> a >> b;
        if (a == b && a == 0) break;
        cout << power(a, b) << endl;
    }
    while (a != 0 || b != 0);
}