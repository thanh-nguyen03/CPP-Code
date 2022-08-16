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

int n, k, a[100], sum = 0;
vector<int> x;
vector<vector<int>> ans;

void init() {
    x.clear();
    ans.clear();
    cin >> n >> k;
    a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a, a + n + 1);
    sum = 0;
}

void output() {
    for (auto i : ans) {
        cout << "[";
        for (int j = 0; j < i.size() - 1; j++) {
            cout << i[j] << " ";
        }
        cout << i.back() << "] ";
    }
    cout << endl;
}

void backtrack(int i) {
    for (int j = i + 1; j <= n; j++) {
        sum += a[j];
        x.pb(a[j]);
        if (sum == k) ans.pb(x);
        backtrack(j);
        sum -= a[j];
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    if (ans.size()) output();
    else cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}