#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n, p, s, curr = 0, idx;
vector<int> x;
vector<ll> pr;
vector<vector<int>> ans;

bool checkPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void sangnguyento() {
    pr.pb(2);
    for (int i = 3; i <= 200; i += 2) {
        if (checkPrime(i)) pr.pb(i);
    }
}

void init() {
    x.clear();
    ans.clear();
    curr = 0;
    for (int i = 0; i < pr.size(); i++) {
        if (pr[i] > p) {
            idx = i;
            break;
        }
    }
}

void output() {
    cout << ans.size() << endl;
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void backtrack(int i, int index) {
    for (int j = index; j < pr.size(); j++) {
        x.pb(pr[j]);
        curr += pr[j];
        if (i == n - 1 && curr == s) ans.pb(x);
        else if (curr < s && i < n - 1) backtrack(i + 1, j + 1);
        curr -= pr[j];
        x.pop_back();
    }
}

void run_test_case() {
    cin >> n >> p >> s;
    init();
    backtrack(0, idx);
    output();
}

int main() {
    sangnguyento();
    tester() 
        run_test_case();
}
