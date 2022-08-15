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

int n, a[100];

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void output(int n) {
    if (n == 0) return;
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << a[i] << " ";
        }
        else cout << a[i];
    }
    cout << "]\n";
}

void solve(int n) {
    for (int i = 0; i < n - 1; i++) {
       a[i] = a[i] + a[i + 1]; 
    }
    output(n - 1);
    if (n > 2) solve(n - 1);
}

void run_test_case() {
    init();
    output(n);
    solve(n);
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}