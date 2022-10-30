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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = 0;
    for (int i = 0; i < n - 2; i++) {
    	if (a[i] + a[i + 1] >= k)	break;
        for (int j = i + 1; j < n - 1; j++) {
        	int pos = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]) - a.begin();
            ans += pos - (j + 1) ;
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}