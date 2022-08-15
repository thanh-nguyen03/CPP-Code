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

int n, sum = 0;
vector<int> x;
vector<vector<int>> ans;

void init() {
    cin >> n;
    sum = 0;
    x.clear();
    ans.clear();
}

void output() {
    cout << ans.size() << endl;
    for (auto b : ans) {
        cout << "(";
        for (int i = 0; i < b.size() - 1; i++) {
            cout << b[i] << " ";
        }
        cout << b.back() << ") ";
    }
    cout << endl;
}

void backtrack(int a) {
    for (int i = a; i >= 1; i--) {
        sum += i;
        x.pb(i);
        if (sum == n) ans.pb(x);
        else if (sum < n) backtrack(i);
        sum -= i;
        x.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(n);
    output();
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}