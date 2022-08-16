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

int n, k, a[50], cnt = 0;
vi x;

void init() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

}

void output() {
    int s = 0;
    for (int i = 0 ; i < x.size(); i++) {
        if (x[i] == 1) s += a[i];
    }
    if (s == k) {
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == 1) cout << a[i] << " ";
        }
        cnt++;
        cout << endl;
    }
}

void backtrack(int i) {
    for (int j = 0; j <= 1; j++) {
        x.pb(j);
        if (i == n - 1) output();
        else backtrack(i + 1);
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << cnt;
}

int main() {
    faster();
        run_test_case();
}