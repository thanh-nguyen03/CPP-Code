#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int k, a[12], sum = 0, j = 0;
    cin >> k;
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    sort(a, a + 12, greater<int>());
    while (sum < k && j < 12) {
        sum += a[j];
        j++;
    }
    if (sum >= k) cout << j;
    else cout << -1;
}