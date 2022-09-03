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

int n, ans;
vi a, vs, col, row;
void init() {
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, 0);
    row.resize(2*n - 1, 0);
    col.resize(2*n - 1, 0);
    ans = 0;
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!vs[j] && !row[i - j + n] && !col[i + j - 1]) {
            a[i] = j;
            vs[j] = 1;
            row[i - j + n] = 1;
            col[i + j - 1] = 1;
            if (i == n) ans++;
            else backtrack(i + 1);
            vs[j] = 0;
            row[i - j + n] = 0;
            col[i + j - 1] = 0;
        }
    }
}

void run_test_case() {
    init();
    backtrack(1);
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}