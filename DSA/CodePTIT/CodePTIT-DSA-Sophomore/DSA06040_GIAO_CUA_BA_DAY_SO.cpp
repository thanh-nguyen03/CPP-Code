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

vll common(vll a, vll b) {
    vll res;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            res.pb(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return res;
}

int n, m, k;
void run_test_case() {
    cin >> n >> m >> k;
    vll a(n), b(m), c(k);
    for (auto &i:a) cin >> i; 
    for (auto &i:b) cin >> i; 
    for (auto &i:c) cin >> i; 
    vll res = common(common(a, b), common(b, c));
    for (auto i:res) {
        cout << i << " ";
    }
    if (res.size() == 0) cout << -1;
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}