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

ll n, a[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    stack<ll> st;
    vll ans;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= a[i]) st.pop();
        if (st.empty()) ans.pb(-1);
        else ans.pb(st.top());
        st.push(a[i]);
    }
    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}