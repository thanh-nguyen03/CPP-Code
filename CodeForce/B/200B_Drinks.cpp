#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int a[n];
    double res = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        res += a[i];
    }
    res /= n * 100;
    cout.precision(12);
    cout << fixed << res * 100;
}