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

char c;
string s, x;
vi a;
int n;
void init() {
    cin >> c;
    for (char i = 'A'; i <= c; i++) {
        s.pb(i);
    }
    n = s.size();
    a.resize(n + 1, 0);
    x.resize(n + 1);
}

void output() {
    for (int i = 2; i < x.size() - 1; i++) {
        if (x[i] == 'A' || x[i] == 'E') {
            if (x[i-1] != 'A' && x[i-1] != 'E') {
                if (x[i+1] != 'A' && x[i+1] != 'E') {
                    return;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << x[i];
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!a[j]) {
            x[i] = s[j-1];
            a[j] = 1;
            if (i == n) output();
            else backtrack(i + 1);
            a[j] = 0;
        }
    }
}

void run_test_case() {
    init();
    backtrack(1);
}

int main() {
    faster();
        run_test_case();
}