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
    vi in(n, 0), de(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i+1]) {
            in[i+1] = in[i] + 1;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        if (a[i] < a[i-1]) {
            de[i-1] = de[i] + 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, in[i] + de[i] + 1);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}