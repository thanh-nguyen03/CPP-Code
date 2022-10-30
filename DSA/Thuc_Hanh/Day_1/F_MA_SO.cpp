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
vector<string> before, after;
vi x, vs;
string s;

void init() {
    cin >> n;
    x.resize(n);
    vs.resize(n, 0);
    s.resize(n);
    for (int i = 0; i < n; i++){
        s[i] = (char)('A' + i);
    }
}

void binary(int pos, string s) {
    if (pos == 0) {
        after.pb(s);
    }
    else {
        for (int i = 0; i < n; i++) {
            binary(pos - 1, s + to_string(i + 1));
        }
    }
}

void push_before() {
    string tmp = "";
    tmp.resize(s.size());
    for (int i = 0; i < s.size(); i++) {
        tmp[i] = s[x[i]];
    }
    before.pb(tmp);
}

void backtrack(int i) {
    for (int j = 0; j < n; j++) {
        if (!vs[j]) {
            x[i] = j;
            vs[j] = 1;
            if (i == n - 1) push_before();
            else backtrack(i + 1);
            vs[j] = 0;
        }
    }
}

void run_test_case() {
    init();
    binary(n, "");
    backtrack(0);
    // for (int i = 0; i < before.size(); i++) cout << before[i] << " ";
    // for (int i = 0; i < after.size(); i++) cout << after[i] << " ";
    for (int i = 0; i < before.size(); i++) {
        for (int j = 0; j < after.size(); j++) {
            cout << before[i] << after[j] << endl;
        }
    }
}

int main() {
    faster();
        run_test_case();
}