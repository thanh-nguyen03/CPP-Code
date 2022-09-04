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

ll n, k, a[MAX];
void run_test_case() {
    cin >> n >> k;
    a[0] = 1;
    for (int i = 1; i < n; i++) {
        a[i] = a[i-1] * 2;
    } 
    for (ll i = n - 1; i >= 0; i--) {
        if (k == a[i]) {
            cout << i + 1 << endl;
            return;
        }
        else if (k > a[i]) k -= a[i];
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}