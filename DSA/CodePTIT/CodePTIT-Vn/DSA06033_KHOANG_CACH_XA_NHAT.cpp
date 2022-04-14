#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define tester() int t; cin >> t; while(t--)

int n;
void run_test_case() {
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int ans = -1, m = a[0].second, k = a[0].first;
    for (int i = 1; i < n; i++) {
        if (a[i].first > k)
            ans = max(ans, a[i].second - m);
        if (a[i].second < m) {
            m = a[i].second;
            k = a[i].first;
        }
    }
    cout << ans << endl;
}

int main() {
    tester() run_test_case();
}