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

int n, a[30][30], chuaxet[30], ans = 9999999, sum = 0;
vector<int> x;
void init() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    x.resize(n + 1, 0);
    memset(chuaxet, 1, sizeof(chuaxet));
    x[0] = 0; x[1] = 1;
}

void backtrack(int i) {
    for (int j = 2; j <= n; j++) {
        if (chuaxet[j]) {
            x[i] = j;
            chuaxet[j] = 0;
            sum += a[x[i - 1]][x[i]];
            if (i == n) {
                sum += a[j][1];
                if (sum < ans) ans = sum;
                sum -= a[j][1];
            }
            else if (sum < ans) backtrack(i + 1);
            sum -= a[x[i - 1]][x[i]];
            chuaxet[j] = 1;
        }
    }
}

int main() {
    init();
    backtrack(2);
    cout << ans;
}