#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
int n, k;
vector<int> back, a;
vector<vector<int>> ans;

void solve() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (back[i] == 1) sum += a[i];
    }
    if (sum == k) ans.pb(back);
}

void backtrack(int i) {
    for (int j = 0; j <= 1; j++) {
        back[i] = j;
        if (i == n - 1) solve();
        else backtrack(i + 1);
    }
}

int main() {
    cin >> n >> k;
    a.resize(n);
    back.resize(n);
    for (auto &i : a) cin >> i;
    backtrack(0);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            if (ans[i][j] == 1) cout << a[j] << " ";
        }
        cout << endl;
    }
    cout << ans.size() << endl;
}