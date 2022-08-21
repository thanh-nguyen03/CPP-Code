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

int n, m, a[MAX], b[MAX];
void run_test_case() {
    cin >> n >> m;
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        s.insert(a[i]);
    }
    set<int> c;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        s.insert(b[i]);
        if (mp[b[i]] != 0) {
            c.insert(b[i]);
        }
    }
    for (auto i:s) cout << i << " ";
    cout << endl;
    for (auto i:c) cout << i << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}