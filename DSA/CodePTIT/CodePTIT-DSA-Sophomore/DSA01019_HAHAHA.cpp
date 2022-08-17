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
void solve(int pos, string s) {
    if (pos == 1) cout << s + "A" << endl;
    else {
        solve(pos - 1, s + "A");
        if (s[s.size() - 1] == 'A') solve(pos - 1, s + "H");

    }
}
void run_test_case() {
    cin >> n;
    solve(n - 1, "H");
}

int main() {
    faster();
    tester() 
        run_test_case();
}