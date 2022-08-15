#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)

int n, a[1000000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int i = 0, j = n - 1;
    vi ans;
    while (i <= j) {
        if (i == j) ans.pb(a[i]);
        else {
            ans.pb(a[j]);
            ans.pb(a[i]);
        }
        i++; j--;
    }
    for (auto x:ans) cout << x << " ";
    cout << endl;
}

int main() {
    tester() 
        run_test_case();
}