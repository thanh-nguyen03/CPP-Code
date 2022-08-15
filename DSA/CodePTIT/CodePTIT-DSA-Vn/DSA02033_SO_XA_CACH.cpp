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

int n, chuaxet[15];
vector<int> x;

void init() {
    x.clear();
    cin >> n;
    x.resize(n);
    memset(chuaxet, 1, sizeof(chuaxet));
}

void output() {
    if (1) {
        for (int i = 0; i < n; i++) cout << x[i];
        cout << endl;
    }
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j]) {
            x[i] = j;
            if (i != 0 && abs(x[i] - x[i - 1]) == 1) continue;
            chuaxet[j] = 0;
            if (i == n - 1) output();
            else backtrack(i + 1);
            chuaxet[j] = 1;
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}