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

string s;
set<string> se;
vector<string> a;
vi x;
int n, k;
void init() {
    cin >> n >> k;
    se.clear();
    for (int i = 0; i < n; i++) {
        cin >> s;
        se.insert(s);
    }
    for (auto i:se) {
        a.pb(i);
    }
    x.resize(k + 1, 0);
    for (int i = 1; i <= k; i++) x[i] = i;
    n = a.size();
}

void output() {
    for (int i = 1; i <= k; i++) {
        cout << a[x[i] - 1] << " ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = x[i-1] + 1; j <= n - k + i; j++) {
        x[i] = j;
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