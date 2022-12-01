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

int n, k, curr, check;
vi a, x;
void init() {
    cin >> n >> k;
    a.clear();
    int tmp;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    for (auto i:s) a.pb(i);
    x.clear();
    curr = 0;
    check = 0;
}

void output() {
    check = 1;
    cout << "[";
    for (int i = 0; i < x.size() - 1; i++) {
        cout << x[i] << " ";
    }
    cout << x.back() << "]";
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        curr += a[j];
        x.pb(a[j]);
        if (curr == k) {
            output();
        }
        else if (curr < k && i < n) backtrack(j);
        curr -= a[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    if (!check) cout << "-1";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}