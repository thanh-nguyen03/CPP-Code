#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    ll n, sum = 0;
    cin >> n;
    if (n % 2 == 0) {
        sum += n / 2;
    }
    else {
        sum += n / 2;
        sum -= n;
    }
    cout << sum;
}