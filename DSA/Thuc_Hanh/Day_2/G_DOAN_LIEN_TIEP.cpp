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

int n;
vi a(MAX);
void run_test_case() {
    cin >> n;
    a.resize(n);
    vi ans(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] >= st.top().first) st.pop();
        if (st.empty()) cout << i + 1 << " ";
        else cout << i - st.top().second << " ";
        st.push(make_pair(a[i], i));
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}