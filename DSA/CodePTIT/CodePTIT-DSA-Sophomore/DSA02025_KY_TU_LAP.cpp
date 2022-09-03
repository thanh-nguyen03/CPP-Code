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

int n, ans, vs[20];
vector<string> s;
vi x;

void init() {
    cin >> n;
    s.resize(n);
    x.resize(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < 20; i++) vs[i] = 0;
    ans = INT_MAX;
}

void solve() {
    int cnt = 0;
    for (int k = 0; k < n - 1; k++) {
        int i = 0, j = 0;
        while (i < s[x[k] - 1].size() && j < s[x[k+1] - 1].size()) {
            if (s[x[k] - 1][i] == s[x[k+1] - 1][j]) {
                cnt++;
                i++;
                j++;
            }
            else if (s[x[k] - 1][i] > s[x[k+1] - 1][j]) {
                j++;
            }
            else i++;
        } 
    }
    ans = min(ans, cnt);
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!vs[j]) {
            x[i] = j;
            vs[j] = 1;
            if (i == n - 1) {
                solve();
            }
            else backtrack(i + 1);
            vs[j] = 0;
        }
    }
}

void run_test_case() {
   init();
   backtrack(0);
   cout << ans << endl;
}

int main() {
    faster();
        run_test_case();
}