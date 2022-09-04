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
void run_test_case() {
    cin >> n;
    priority_queue<ll> q;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        q.push(-1 * a);
    }
    ll ans = 0;
    while (1) {
        ll x = q.top();
        q.pop();
        x += q.top();
        q.pop();
        ans += x;
        if (q.empty()) break;
        q.push(x);
    }
    cout << abs(ans) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}