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

int a[100], n, k;
vector<int> x;
vector<vector<int>> ans;

void init() {
    x.clear();
    ans.clear();
    cin >> n >> k;
    a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a, a + n + 1);
}

void output() {
    for (auto as : ans) {
        for (int i = 0; i < as.size(); i++) {
            cout << as[i] << " ";
        }
        cout << endl;
    }
}

void backtrack(int i) {
    for (int j = i + 1; j <= n; j++) {
        if (a[j] > a[i]) {
            x.pb(a[j]);
            if (x.size() == k) ans.pb(x);
            backtrack(j);
            x.pop_back();
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    output();
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}