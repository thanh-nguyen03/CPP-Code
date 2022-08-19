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
char c;
string s, x;
void init() {
    cin >> c >> n;
    for (char i = 'A'; i <= c; i++) {
        s.pb(i);
    }
}

void backtrack(int i, int cnt) {
    for (int j = i; j < s.size(); j++) {
        x.pb(s[j]);
        if (cnt == n - 1) cout << x << endl;
        else backtrack(j, cnt + 1);
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0, 0);
}

int main() {
    faster();
        run_test_case();
}