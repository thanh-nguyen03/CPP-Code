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

int n, a[10000];
void run_test_case() {
    cin >> n;
    int mp[10000] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        
    }
    if (mp[0]) {
        cout << n - mp[0] << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > 1) {
            cout << n << endl;
            return;
        }
    }
    cout << n + 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}