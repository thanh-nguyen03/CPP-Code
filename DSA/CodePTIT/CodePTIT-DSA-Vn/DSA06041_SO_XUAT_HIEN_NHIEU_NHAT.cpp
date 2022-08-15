#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define tester() int t; cin >> t; while(t--)

int n, a[1000000], mp[10000000];
void run_test_case() {
    memset(mp, 0, sizeof(mp));
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0, m = 0;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > n / 2) {
            if (m < mp[a[i]]) {
                m = mp[a[i]];
                ans = a[i];
            }
        }
    }
    if (ans == 0) cout << "NO" << endl;
    else cout << ans << endl;
}

int main() {
    tester() run_test_case();
}