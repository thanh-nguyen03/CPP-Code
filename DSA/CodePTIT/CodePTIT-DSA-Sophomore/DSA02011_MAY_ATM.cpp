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

ll n, s, curr, cnt, ans;
vll a;
void init() {
    cin >> n >> s;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(all(a));
    curr = 0;
    cnt = 0;
    ans = LONG_LONG_MAX;
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        curr += a[j];
        cnt++;
        if (curr == s) {
            ans = min(ans, cnt);
        }
        else if (curr < s && i < n) backtrack(j + 1);
        curr -= a[j];
        cnt--;
    }
}

void run_test_case() {
    init();
    backtrack(0);
    if (ans != LONG_LONG_MAX) {
        cout << ans << endl;
        return;
    }
    cout << -1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}