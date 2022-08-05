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

int a[20];
int vs[20] = {}, row[20], col[20];
int n, ans;
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    memset(vs, 0, sizeof(vs));
    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));
    ans = 0;
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!vs[j] && !row[i-j+n] && !col[i+j-1]) {
            a[i] = j;
            vs[j] = 1;
            row[i-j+n] = 1;
            col[i+j-1] = 1;
            if (i != n - 1) backtrack(i+1);
            else ans++;
            vs[j] = 0;
            row[i-j+n] = 0;
            col[i+j-1] = 0;
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