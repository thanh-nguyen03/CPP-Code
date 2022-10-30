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

int n, a[MAX];
void run_test_case() {
    cin >> n;
    ll left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        right += a[i];
    }
    if (right - a[0] == 0) {
        cout << 0 << endl;
        return;
    }
    right -= a[0];
    for (int i = 1; i < n; i++) {
        left += a[i - 1];
        right -= a[i];
        if (left == right) {
            cout << i + 1  << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}