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

vector<int> x;
int a[10][10], n = 8, chuaxet[10], le[50], ri[50], sum, ans;

void init() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    memset(chuaxet, 1, sizeof(chuaxet));
    memset(le, 1, sizeof(le));
    memset(ri, 1, sizeof(ri));
    sum = 0; ans = 0;
    x.resize(n);
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j] && le[i - j + n] && ri[i + j - 1]) {
            x[i] = j;
            chuaxet[j] = 0;
            le[i - j + n] = 0;
            ri[i + j - 1] = 0;
            sum += a[i][j - 1];
            if (i == n - 1) {
                ans = max(ans, sum);
            }
            else backtrack(i + 1);
            chuaxet[j] = 1;
            le[i - j + n] = 1;
            ri[i + j - 1] = 1;
            sum -= a[i][j - 1];
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << ans << endl;
    x.clear();
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}