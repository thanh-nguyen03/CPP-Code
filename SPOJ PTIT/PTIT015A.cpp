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

string a, b, c;
vi x;
void solve(string n) {
    for (auto i:n) {
        x.pb(i - '0');
    }
}
void run_test_case() {
    cin >> a >> b >> c;
    x.clear();
    solve(a); solve(b); solve(c);
    sort(all(x), greater<int>());
    for (auto i:x) cout << i;
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}