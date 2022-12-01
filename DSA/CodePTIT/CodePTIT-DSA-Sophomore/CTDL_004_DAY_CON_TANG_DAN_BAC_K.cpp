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

int n, k, a[MAX];
vi x;
int ans = 0;
void init() {
    cin >> n >> k;
    a[0] = INT_MIN;
    for (int i = 1; i <= n; i++) cin >> a[i];
    x.clear();
    ans = 0;
}

void output() {
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = i + 1; j <= n; j++) {
        if (a[j] > a[i]) {
            x.pb(a[j]);
            if (x.size() == k) {
                // output();
                ans++;
            }
            else backtrack(j);
            x.pop_back();
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