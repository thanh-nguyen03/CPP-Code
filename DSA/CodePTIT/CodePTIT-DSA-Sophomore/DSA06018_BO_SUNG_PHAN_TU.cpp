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
    int maxx = 0, minn = INT_MAX;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
        mp[a[i]] = 1;
    }
    int cnt = 0;
    for (int i = minn; i <= maxx; i++) {
        if (!mp[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}