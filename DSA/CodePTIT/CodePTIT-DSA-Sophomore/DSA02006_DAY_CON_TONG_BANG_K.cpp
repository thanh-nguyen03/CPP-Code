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

int n, k, s;
vi a, x;
int check = 0;
void init() {
    cin >> n >> k;
    a.resize(n);
    for (auto &i:a) cin >> i;
    sort(all(a));
    s = 0;
    x.clear();
    check = 0;
}

void output() {
    check = 1;
    cout << "[";
    for (int i = 0; i < x.size() - 1; i++) {
        cout << x[i] << " ";
    }
    cout << x.back() << "] ";
}

void backtrack(int i) {
    for (int j = i + 1; j < n; j++) {
        s += a[j];
        x.pb(a[j]);
        if (s == k) {
            output();
        } 
        else if (s < k && i < n) backtrack(j);
        s -= a[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(-1);
    if (!check) {
        cout << -1 << endl;
        return;
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}