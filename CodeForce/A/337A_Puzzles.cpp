#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++) cin >> a[i];
    sort(a, a + m);
    int min = a[n - 1] - a[0];
    for (int i = 0; i <= m - n; i++) {
        if (a[i + n - 1] - a[i] < min) {
            min = a[i + n - 1] - a[i];
        }
    }
    cout << min;
}