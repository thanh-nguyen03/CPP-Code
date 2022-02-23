#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int n, b, a, x  = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << a + x << " ";
        x = max(x, x + a);
    }
    
}