#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    ll k, n, w;
    cin >> k >> n >> w;
    ll sum = 0;
    
    for (int i = 1; i <= w; i++) {
        sum += i*k;
    }
    if (sum >= n) cout << sum - n;
    else cout << 0;
}