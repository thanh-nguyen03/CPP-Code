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

int check(string s) {
    for (int i = 3; i < s.size(); i++) {
        if (s.substr(i - 3, 4) == "6666") return 0;
    }
    return 1;
}

void solve(int pos, string s) {
    if (pos == 1) {
        s += "6";
        if (check(s)) cout << s << endl;
    } 
    else {
        solve(pos - 1, s + "6"); 
        if (s[s.size() - 1] != '8') solve(pos - 1, s + "8");
    }
}

void run_test_case() {
    cin >> n;
    solve(n - 1, "8");
}

int main() {
    faster();
        run_test_case();
}