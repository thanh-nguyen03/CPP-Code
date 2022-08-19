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

int n;
vi a;
stack<string> ans;
void init() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;
    while (!ans.empty()) ans.pop();
}
void addToStack(int n) {
    if (n == 0) return;
    string s = "[";
    for (int i = 0; i < n - 1; i++) {
        s += to_string(a[i]) + " ";
    }
    s += to_string(a[n - 1]) + "]";
    ans.push(s);
}

void solve(int n) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] + a[i + 1];
    }
    addToStack(n - 1);
    if (n > 2) solve(n - 1);
}

void run_test_case() {
    init();
    addToStack(n);
    solve(n);
    while (!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}