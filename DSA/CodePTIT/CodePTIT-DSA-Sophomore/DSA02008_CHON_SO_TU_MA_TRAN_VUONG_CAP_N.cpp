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

int n, k, a[105][105];
vi x;
vector<vi> ans;
void run_test_case() {
    cin >> n >> k;
    x.resize(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int curr = 0;
    for (int i = 0; i < n; i++)  x[i] = i + 1;
    for (int i = 0; i < n; i++)  {
        curr += a[i][x[i] - 1];
    }
    if (curr == k) {
        ans.pb(x);
    }
    while (next_permutation(all(x))) {
        curr = 0;
        for (int i = 0; i < n; i++) {
            curr += a[i][x[i] - 1];
        }
        if (curr == k) ans.pb(x);
    }
    cout << ans.size() << "\n";
    for (auto i:ans) {
        for (auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    faster();
        run_test_case();
}