#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define tester() int t; cin >> t; while(t--)

int n, a;
void run_test_case() {
    cin >> n;
    map<int, int> m;
    int l = 0, r = 1000000;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m[a]++;
        l = max(l, a);
        r = min(r, a);
    }
    int cnt = 0;
    for (int i = r + 1; i < l; i++) {
        if (m[i] == 0) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    tester() run_test_case();
}