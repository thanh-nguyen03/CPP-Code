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

int x, y;
void run_test_case() {
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << 0 << endl;
        return;
    }
    double s = sqrt(x * x + y * y);
    if (s == (ll)s) {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}