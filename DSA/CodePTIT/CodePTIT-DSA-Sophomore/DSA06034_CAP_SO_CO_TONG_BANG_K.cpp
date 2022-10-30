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

ll n, k;
void run_test_case() {
    vll a;
    cin >> n >> k;
    a.resize(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for (auto i:mp) {
        if (i.first * 2 == k) {
            ans += i.second * (i.second - 1);
        }
        else {
            ans += i.second * mp[k - i.first];
        }
    }
    cout << ans / 2 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}