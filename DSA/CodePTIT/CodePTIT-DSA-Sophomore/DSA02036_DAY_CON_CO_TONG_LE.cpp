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

int n, curr;
vi a, x;
set<vi> ans;
void init() {
    cin >> n;
    int tmp;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    a.clear();
    ans.clear();
    x.clear();
    a.pb(0);
    for (auto i:s) a.pb(i);
    reverse(a.begin() + 1, a.end());
    n = a.size();
    curr = 0;
}

void backtrack(int i) {
    for (int j = i + 1; j < n; j++) {
        curr += a[j];
        x.pb(a[j]);
        if (curr&1) ans.insert(x);
        backtrack(j);
        curr -= a[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    for (auto i:ans) {
        for (auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}