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
string s;
set<string> ans;
string x;

void init() {
    x.clear();
    ans.clear();
    cin >> n >> s;
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        x.pb(s[j]);
        ans.insert(x);
        backtrack(j + 1);
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    for (auto i:ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}