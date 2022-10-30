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

int v, e;
void run_test_case() {
    cin >> v >> e;
    int a, b;
    vector<vi> mp(v + 1);
    while (e--) {
        cin >> a >> b;
        mp[a].pb(b);
    }
    for (int i = 1; i <= v; i++) {
        cout << i << ":";
        for (auto j:mp[i]) {
            cout << " " << j;
        }
        cout << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}