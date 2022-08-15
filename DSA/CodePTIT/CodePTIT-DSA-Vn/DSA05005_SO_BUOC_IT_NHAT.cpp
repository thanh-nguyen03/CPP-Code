#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n, a[100000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> f(n, 1);
    int m = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] >= a[j]) {
                f[i] = max(f[i], f[j] + 1);
                m = max(m, f[i]);
            }
        }
    }

    cout << n - m << endl;
}

int main() {
    tester() run_test_case();
}