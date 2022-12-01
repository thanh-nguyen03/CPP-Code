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

int n, k, cnt = 0;
vector<string> ans;
string Astr;
void solve(string s) {
    if (s[0] == 'B') {
        cnt++;
        ans.pb(Astr + s);
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] != 'A' && s[i] != 'A') {
            string tmp = s;
            tmp.insert(i, Astr); 
            ans.pb(tmp);
            cnt++;
        }
    }
    if (s.back() != 'A') {
        ans.pb(s + Astr);
        cnt++;
    }
}

void backtrack(int i, string s, int cnt) {
    if (i == n - k) {
        solve(s);
    }
    else {
        if (cnt < k) backtrack(i + 1, s + "A", cnt + 1);
        backtrack(i + 1, s + "B", cnt);
    }
}

void run_test_case() {
    cin >> n >> k;
    if (k > n) return;
    for (int i = 0; i < k; i++) Astr += "A";
    backtrack(0, "", 0);
    cout << cnt << endl;
    sort(all(ans));
    for (auto i:ans) {
        cout << i << endl;
    }
}

int main() {
    faster();
        run_test_case();
}