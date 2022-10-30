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

ll n, k, curr = 0, cnt = 0, ans = LONG_LONG_MAX;
int check = 0;
vll a;
void init() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
}

void backtrack(int i) {
    for (int j = i + 1; j < n; j++) {
        curr += a[j];
        cnt++;
        if (curr == k) {
            check = 1;
            ans = min(ans, cnt);
        }
        else if (curr < k && i < n) backtrack(j);
        curr -= a[j];
        cnt--;
    }
}

void run_test_case() {
    init();
    backtrack(-1);
    if (check) {
        cout << ans << endl;
    }
    else cout << -1 << endl;
}

int main() {
    faster();
        run_test_case();
}