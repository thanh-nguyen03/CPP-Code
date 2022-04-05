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

int n;
vector<ll> ans;
void run_test_case() {
    cin >> n;
    ans.resize(n, 1);
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * 3;
        if (ans[i] > (int)1e9) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}