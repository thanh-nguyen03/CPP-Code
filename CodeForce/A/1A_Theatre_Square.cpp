#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int n, m, a;
    cin >> n >> m >> a;
    ll x = n / a;
    ll y = m / a;
    if (n % a != 0) x++;
    if (m % a != 0) y++;
    
    cout << x * y;
}