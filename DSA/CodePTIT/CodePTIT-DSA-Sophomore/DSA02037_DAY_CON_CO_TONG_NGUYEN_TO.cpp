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

int n, f[10000] = {0}, curr = 0;
vi a, x;
set<vi> ans;

void eratos() {
    f[0] = f[1] = 1;
    for (int i = 2; i < 10000; i++) {
        if (f[i] == 0) {
            f[i] = 0;
            for (int j = i*2; j < 10000; j += i) {
                f[j] = 1;
            }
        }
    }
}

void init() {
    x.clear();
    a.clear();
    ans.clear();
    cin >> n;
    int tmp;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    a.pb(0);
    for (auto i:s) a.pb(i);
    reverse(a.begin() + 1, a.end());
    n = a.size();
    curr = 0;
}

void output() {
    for (auto i:ans) {
        for (auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void backtrack(int i) {
    for (int j = i + 1; j < n; j++) {
        curr += a[j];
        x.pb(a[j]);
        if (f[curr] == 0) {
            ans.insert(x);
        }
        backtrack(j);
        curr -= a[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    output();
}

int main() {
    eratos();
    faster();
    tester() 
        run_test_case();
}