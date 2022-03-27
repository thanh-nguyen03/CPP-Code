#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n, count = 0;
    cin >> n;
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (p <= q - 2) count++;
    }
    cout << count;
}