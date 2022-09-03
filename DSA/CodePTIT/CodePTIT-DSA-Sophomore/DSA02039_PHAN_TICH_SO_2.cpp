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

int n, curr;
vi a, x;
vector<vi> ans;
void init() {
    a.clear();
    x.clear();
    ans.clear();
    cin >> n;
    for (int i = n; i >= 1; i--) a.pb(i);
    curr = 0;
}

void output() {
    cout << ans.size() << endl;
    for (auto i:ans) {
        cout << "(";
        for (int j = 0; j < i.size() - 1; j++) {
            cout << i[j] << " ";
        }
        cout << i.back() << ") ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = i; j < a.size(); j++) {
        curr += a[j];
        x.pb(a[j]);
        if (curr == n) {
            ans.pb(x);
        }
        else if (curr < n) backtrack(j);
        curr -= a[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    output();
}

int main() {
    faster();
    tester() 
        run_test_case();
}