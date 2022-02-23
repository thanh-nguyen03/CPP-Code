#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll a, x, y;
void run_test_case() {
	cin >> a >> x >> y;
	ll k = __gcd(x, y);
	for (int i = 0;i < k; i++) cout << a;
	cout << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

