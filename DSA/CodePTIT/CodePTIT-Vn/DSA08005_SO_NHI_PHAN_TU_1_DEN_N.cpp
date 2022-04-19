#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n;
void run_test_case() {
    cin >> n;
    queue<ll> q;
    q.push(1);
    vector<ll> ans;
    while (ans.size() != n) {
        ll tmp = q.front();
        ans.pb(tmp);
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
        q.pop();
    }
    for (auto e : ans) cout << e << " ";
    cout << endl;
}

int main() {
    tester() 
        run_test_case();
}