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

int n, a[10000], s[10000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s[i] = a[i];
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++) {
        if (a[i] != s[i] && a[i] != s[n - i - 1]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}