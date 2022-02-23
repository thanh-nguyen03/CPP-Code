#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, k;
void run_test_case() {
    cin >> n >> k;
    int time = n / k, remainder = n % k, sum = 0;
    sum = time * (k * (k + 1) / 2);
    sum += remainder * (remainder + 1) / 2;
    if (sum == k) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}