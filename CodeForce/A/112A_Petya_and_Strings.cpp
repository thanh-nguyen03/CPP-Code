#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A';
        if (b[i] >= 'A' && b[i] <= 'Z') b[i] += 'a' - 'A';
    }
    int res = a.compare(b);
    if (res < 0) cout << -1;
    else if (res > 0) cout << 1;
    else cout << 0;
}