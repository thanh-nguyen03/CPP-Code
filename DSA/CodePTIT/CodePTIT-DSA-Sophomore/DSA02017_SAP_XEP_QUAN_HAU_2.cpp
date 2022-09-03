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

int n, a[10][10], vs[50], row[50], col[50], x[20];
int ans, curr;
void init() {
    n = 8;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    memset(vs, 0, sizeof(vs));
    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));
    ans = 0;
    curr = 0;
}


void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!vs[j] && !row[i + j - 1] && !col[i - j + n]) {
            vs[j] = 1;
            row[i + j - 1] = 1;
            col[i - j + n] = 1;
            curr += a[i][j - 1];
            if (i == n - 1) {
                ans = max(ans, curr);
            }
            else backtrack(i + 1);
            curr -= a[i][j - 1];
            vs[j] = 0;
            row[i + j - 1] = 0;
            col[i - j + n] = 0;
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
    tester() 
        run_test_case();
}