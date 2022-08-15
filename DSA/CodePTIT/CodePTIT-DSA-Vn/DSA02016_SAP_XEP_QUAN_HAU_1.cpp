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
int chuaxet[20], le[20], ri[20], n, ans;

void init() {
    cin >> n;
    memset(chuaxet, 1, sizeof(chuaxet));
    memset(le, 1, sizeof(le));
    memset(ri, 1, sizeof(ri));
    ans = 0;
    x.resize(n);
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j] && le[i - j + n] && ri[i + j - 1]) {
            chuaxet[j] = 0;
            le[i - j + n] = 0;
            ri[i + j - 1] = 0;
            x[i] = j;
            if (i == n - 1) ans++;
            else backtrack(i + 1);
            chuaxet[j] = 1;
            le[i - j + n] = 1;
            ri[i + j - 1] = 1;
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}