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

int n, a[20][20];
set<string> ans;
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    ans.clear();
}

void backtrack(int i, int j, string s) {
    if (i < 0 || i == n || j < 0 || j == n) return;
    if (a[i][j] == 0) return;
    if (i == n - 1 && j == n - 1) {
        ans.insert(s);
        return;
    }
    backtrack(i + 1, j, s + "D");
    backtrack(i, j + 1, s + "R");
}

void run_test_case() {
    init();
    backtrack(0, 0, "");
    for (auto i:ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}