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
vi a, x;
set<string> ans;

void init() {
    x.clear();
    ans.clear();
    cin >> n;
    // set<int> s;
    // int tmp;
    // for (int i = 0; i < n; i++) {
    //     cin >> tmp;
    //     s.insert(tmp);
    // }
    // a.pb(0);
    // for (auto i:s) {
    //     a.pb(i);
    // }
    a.pb(INT_MIN);
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.pb(tmp);
    }
}

void backtrack(int i) {
    for (int j = i + 1; j <= n; j++) {
        if (a[j] > a[i]) {
            x.pb(a[j]);
            if (x.size() > 1) {
                string s = "";
                for (auto k:x) {
                    s += to_string(k) + " ";
                }
                ans.insert(s);
            }
            backtrack(j);
            x.pop_back();
        }
    }
}

void output() {
    for (auto i:ans) {
        cout << i << endl;
    }
}

void run_test_case() {
    init();
    backtrack(0);
    output();
}

int main() {
    faster();
        run_test_case();
}