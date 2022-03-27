#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int sum = 0, min = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i];
        if (sum < min) min = sum;
        if (sum > 0) sum = 0;
    }
    cout << 0 - min; 
}