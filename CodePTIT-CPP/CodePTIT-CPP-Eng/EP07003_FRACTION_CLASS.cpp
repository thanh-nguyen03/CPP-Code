#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

class Fraction {
	public:
	ll tu, mau;
	
	void rutgon() {
		ll k = gcd(tu, mau);
		tu /= k;
		mau /= k;
	}
};


int main() {
    fastread();
	Fraction p;
	cin >> p.tu >> p.mau;
	p.rutgon();
	cout << p.tu << "/" << p.mau;
}

