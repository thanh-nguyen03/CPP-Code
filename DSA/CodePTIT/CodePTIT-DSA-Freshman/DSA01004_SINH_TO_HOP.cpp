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

vector<int> x;
int n, k;
void init() {
    cin >> n >> k;
    x.resize(k + 1, 0);
    for (int i = 1; i <= k; i++) x[i] = i;
}

void output() {
    for (int i = 1; i <= k; i++) cout << x[i];
    cout << " ";
}

void backtrack(int i) {
    for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;
        if (i == k) output();
        else backtrack(i + 1);
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