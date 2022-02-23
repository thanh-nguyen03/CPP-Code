#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll reverse(ll n) {
	ll sum = 0;
	while(n) {
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
    fastread();
	ll n;
	cin >> n;
	cout << reverse(n);
}

