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

int n, k, cnt, curr;
vector<vi> ans;
vi x, a;
int check = 0;
void init() {
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    a.clear();
    ans.clear();
    x.clear();
    for (auto i:s) {
        a.pb(i);
    } 
    n = a.size();
    cnt = 0;
    check = 0;
    curr = 0;
    x; 
}

void output() {
    if (!check) {
        cout << "-1\n";
        return;
    }
    cout << ans.size() << " ";
    for (auto i:ans) {
        cout << "{";
        for (int j = 0; j < i.size() - 1; j++) {
            cout << i[j] << " ";
        }
        cout << i.back() << "} ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        curr += a[j];
        x.pb(a[j]);
        if (curr == k) {
            check = 1;
            ans.pb(x);
        }
        else if (curr < k && i < n) backtrack(j);
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