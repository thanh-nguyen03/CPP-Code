#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));



int main() {
    fastread();
	ll a, b, sum = 0;
	cin >> a >> b;
	for (ll i = 1; i <= sqrt(b); i++) {
		if (i * i >= a) {
			sum += i * i;
		}
	}
	cout << sum;
}

