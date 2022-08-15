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
int n, chuaxet[100];

void init() {
    cin >> n;
    x.resize(n);
    memset(chuaxet, 1, sizeof(chuaxet));
    for (int i = 0; i < n; i++) x[i] = i + 1;
}

void output() {
    for (int i = 0; i < n; i++) cout << x[i];
    cout << " ";
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j]) {
            x[i - 1] = j;
            chuaxet[j] = 0;
            if (i == n) output();
            else backtrack(i + 1);
            chuaxet[j] = 1;
        }
    }
}

void run_test_case() {
    init();
    backtrack(1);
    x.clear();
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}