#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int p = n / 5;
    if (n % 5 == 0) cout << p;
    else cout << p + 1;
}