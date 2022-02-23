#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count;
}