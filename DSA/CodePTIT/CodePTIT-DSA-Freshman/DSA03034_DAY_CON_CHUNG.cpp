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

int n, m, p, a[1000000], b[1000000], c[1000000];
vector<int> ans;
void run_test_case() {
    ans.clear();
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < p; i++) cin >> c[i];

    int i1= 0, i2 = 0, i3 = 0;
    while (i1 < n && i2 < m && i3 < p) {
        if (a[i1] == b[i2] && b[i2] == c[i3]) {
            ans.pb(a[i1]);
            i1++; i2++; i3++;
        }
        else if (a[i1] < b[i2]) i1++;
        else if (b[i2] < c[i3]) i2++;
        else i3++;
    }
    if (ans.empty()) {
        cout << "NO" << endl;
        return;
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}