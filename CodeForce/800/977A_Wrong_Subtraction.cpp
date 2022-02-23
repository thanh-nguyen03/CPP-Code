#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        }
        else {
            n--;
        }
    }
    cout << n;
}