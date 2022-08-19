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
vi a, b;
void init() {
    cin >> n >> k;
    b.resize(k + 1, 0);
    for (int i = 1; i <= k; i++) b[i] = i;
    set<int> s;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    a.clear();
    for (auto i:s) {
        a.pb(i);
    }
    n = a.size();
}

void output() {
    // for (int i = 1; i <= k; i++) cout << b[i] << " ";
    // cout << endl;
    for (int i = 1; i <= k; i++) {
        cout << a[b[i] - 1] << " ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; j++) {
        b[i] = j;
        if (i == k) output();
        else backtrack(i + 1);
    }
}

void run_test_case() {
    init();
    backtrack(1);
}

int main() {
    faster();
        run_test_case();
}