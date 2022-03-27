#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int count = 0, max = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        count -= a;
        count += b;
        if (count > max) max = count;
    }
    cout << max;
}