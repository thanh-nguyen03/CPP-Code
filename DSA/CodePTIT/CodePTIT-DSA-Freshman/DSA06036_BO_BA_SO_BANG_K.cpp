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

int n, a[10000], target;
void run_test_case() {
    cin >> n >> target;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int i = 0, j = n - 2, k = n - 1;
    while (k != 1) {
        if (a[i] + a[j] + a[k] == target) {
            cout << "YES" << endl;
            return;
        }
        else if (a[i] + a[j] + a[k] < target) {
            i++;
        }
        else {
            j--;
        }

        if (i == j) {
            k--;
            i = 0;
            j = k - 1;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}