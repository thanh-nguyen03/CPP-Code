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
string s;
int n, chuaxet[100];

void init() {
    cin >> s;
    n = s.size();
    x.resize(n);
    memset(chuaxet, 1, sizeof(chuaxet));
}

void output() {
    for (int i = 0; i < n; i++) {
        cout << s[x[i] - 1];
    }
    cout << " ";
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j]) {
            x[i] = j;
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
    x.clear();
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}