#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    if (n >= 0) cout << n;
    else {
        int a = n / 10;
        int last = n % 10;
        int b = (n / 100) * 10 + last;
        if (a > b) cout << a;
        else cout << b;
    }
}