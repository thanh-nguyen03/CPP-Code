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

ll n;
string s;
void run_test_case() {
    cin >> n >> s;
    map<char, int> m;
    for (auto i:s) m[i]++;
    priority_queue<ll> q;
    for (auto i:m) {
        q.push(i.second);
    }
    ll tmp;
    while (n--) {
        tmp = q.top() - 1;
        q.pop();
        q.push(tmp);
    }
    ll ans = 0;
    while (!q.empty()) {
        ans += q.top() * q.top();
        q.pop();
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}