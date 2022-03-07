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

int n, a[10000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll b1 = a[0] * a[1];
    ll b2 = a[n - 1] * a[n - 2];
    ll b3 = b2 * a[n - 3];
    ll b4 = b1 * a[n - 1];
    cout << max(b1, max(b2, max(b3, b4)));
}