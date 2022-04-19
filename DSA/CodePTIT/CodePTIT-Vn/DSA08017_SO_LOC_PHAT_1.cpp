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
    queue<string> q;
    vector<string> ans;
    q.push("6");
    q.push("8");
    while (q.front().size() <= n) {
        string tmp = q.front();
        ans.pb(tmp);
        q.push(tmp + "6");
        q.push(tmp + "8");
        q.pop();
    }
    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    tester() 
        run_test_case();
}