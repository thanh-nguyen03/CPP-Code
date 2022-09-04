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

ll n, k, curr, ans;
int check = 0;
vll a, x;
void init() {
    cin >> n >> k;
    a.resize(n);
    x.clear();
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ans = INT_MAX;
    curr = 0;
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        curr += a[j];
        x.pb(a[j]);
        if (curr == k) {
            check = 1;
            ans = min(ans, (ll)x.size());
        }
        else if (curr < k && i < n) backtrack(j + 1);
        curr -= a[j];
        x.pop_back();
    } 
}

void run_test_case() {
    init();
    backtrack(0);
    if (!check) {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int main() {
    faster();
        run_test_case();
}