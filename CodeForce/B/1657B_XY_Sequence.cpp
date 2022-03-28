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

ll n, b, x, y;
void run_test_case() {
    cin >> n >> b >> x >> y;
    ll sum = 0, a = 0;
    while (n--) {
        if (a + x <= b) a += x;
        else a -= y;
        sum += a;
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();    
}