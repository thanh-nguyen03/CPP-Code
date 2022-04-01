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

int a, b;
void run_test_case() {
    cin >> a >> b;
    if (a) {
        cout << a + 2 * b + 1 << endl;
        return;
    }
    cout << 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}