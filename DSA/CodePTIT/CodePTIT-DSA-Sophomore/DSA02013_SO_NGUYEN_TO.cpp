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

int n, p, s;
vector<int> snt;
int idx, curr;
set<vi> ans;
vi x;

int checksnt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void makePrime() {
    snt.pb(2);
    for (int i = 3; i <= 200; i++) {
        if (checksnt(i)) {
            snt.pb(i);
        }
    }
}


void init() {
    cin >> n >> p >> s;
    idx = 0;
    curr = 0;
    ans.clear();
    x.clear();
    for (int i = 0; i < snt.size(); i++) {
        if (snt[i] >= p) {
            idx = i;
            break;
        }
    }
}

void backtrack(int i) {
    for (int j = i + 1; j < snt.size(); j++) {
        curr += snt[j];
        x.pb(snt[j]);
        if (curr == s && x.size() == n) ans.insert(x);
        else if(curr < s) backtrack(j);
        curr -= snt[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    // cout << snt[idx] << "-";
    backtrack(idx);
    cout << ans.size() << endl;
    for (auto i:ans) {
        for (auto j:i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    makePrime();
    // for (int i = 0; i < snt.size(); i++) cout << snt[i] << " ";
    faster();
    tester() 
        run_test_case();
}

// 2 3 5 7 11 13