#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    ll n, sum = 0, curr = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        curr *= i;
        sum += curr;
    }
    cout << sum;
}
