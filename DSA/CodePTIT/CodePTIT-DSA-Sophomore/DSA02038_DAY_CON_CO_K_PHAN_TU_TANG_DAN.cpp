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

int n, k;
vi a, x;

void init() {
    a.clear();
    x.clear();
    set<int> s;
    int tmp;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    for (auto i:s) a.pb(i);
    n = a.size();
}

void output() {
    for (auto i:x) {
        cout << i << " ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        x.pb(a[j]);
        if (x.size() == k) output();
        else backtrack(j + 1);
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
}

int main() {
    faster();
    tester() 
        run_test_case();
}