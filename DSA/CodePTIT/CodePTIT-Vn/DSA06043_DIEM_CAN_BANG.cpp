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
#define tester() int t; cin >> t; while(t--)

int n, a[1000000];
void run_test_case() {
    cin >> n;
    int r = 0, l = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r += a[i];
    }
    r -= a[0];
    for (int i = 1; i < n; i++) {
        l += a[i - 1];
        r -= a[i];
        if (l == r) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    tester() run_test_case();
}