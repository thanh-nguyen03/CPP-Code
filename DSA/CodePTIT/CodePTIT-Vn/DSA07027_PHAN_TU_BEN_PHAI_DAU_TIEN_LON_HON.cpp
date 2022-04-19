#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n, a[1000000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> ans = {-1};
    stack<int> st;
    st.push(a[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        while (!st.empty() && a[i] >= st.top()) st.pop();
        if (!st.empty()) ans.pb(st.top());
        else ans.pb(-1);
        st.push(a[i]);
    }
    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    tester() 
        run_test_case();
}