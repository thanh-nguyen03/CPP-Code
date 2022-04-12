#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

int n, a[1000000];
void run_test_case() {
    map<int, int> mp;
    cin >> n;
    int maxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] == n) {
            cout << 0 << endl;
            return;
        }
        if (mp[a[i]] > maxx) maxx = mp[a[i]];
    }
    int step = n - maxx;
    while (maxx < n) {
        step++;
        maxx *= 2;
    }
    cout << step << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}