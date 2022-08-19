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

int n, a[50];
set<string> ans;
vi x;
void init() {
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    // sort(a, a + n + 1);
    ans.clear();
}

void addToAns() {
    string s;
    for (auto i:x) {
        s += to_string(i) + " ";
    }
    // cout << s << "x" << endl;
    ans.insert(s);
}

void backtrack(int i) {
    for (int j = i + 1; j <= n; j++) {
        if (a[j] > a[i]) {
            x.pb(a[j]);
            if (x.size() > 1) addToAns();
            backtrack(j);
            x.pop_back();
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    for (auto i:ans) {
        cout << i << endl;
    }
}

int main() {
    faster();
        run_test_case();
}