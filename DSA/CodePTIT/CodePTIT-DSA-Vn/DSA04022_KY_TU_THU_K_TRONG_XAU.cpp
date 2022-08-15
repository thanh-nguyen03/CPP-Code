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
int n, k;

void solve(int n) {
    int p = (int)pow(2, n - 1);
    if (k == p) {
        cout << (char) ('A' + n - 1) << endl;
        return;
    }
    if (k > p) k -= p;
    solve(n - 1);
}

void run_test_case() {
    cin >> n >> k;
    solve(n);
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}