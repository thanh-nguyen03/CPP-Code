#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int n, x, y, z, ansx = 0, ansy = 0, ansz = 0;
    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        ansx += x;
        ansy += y;
        ansz += z;
    }
    if (ansx == 0 && ansy == 0 && ansz == 0) cout << "YES";
    else cout << "NO";
}