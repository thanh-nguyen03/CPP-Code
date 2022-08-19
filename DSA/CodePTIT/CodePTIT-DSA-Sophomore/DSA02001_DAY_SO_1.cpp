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
void init() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;
}

void output(int n) {
    if (n == 0) return;
    cout << "[";
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << "]" << endl;
}

void solve(int n) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] + a[i+1];
    }
    output(n - 1);
    if (n > 2) solve(n - 1);
}

void run_test_case() {
    init();
    output(n);
    solve(n);
}

int main() {
    faster();
    tester() 
        run_test_case();
}