#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    ll odd = (n - 1) / 2 + 1, even = odd + (n - 2) / 2 + 1;
    if (k <= odd) {
        cout << k * 2 - 1;
    }
    else {
        cout << (k - odd) * 2;
    }
}