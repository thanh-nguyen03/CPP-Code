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

class Fraction {
	public:
	ll tu, mau;
	
	void rutgon() {
		ll k = __gcd(tu, mau);
		tu /= k;
		mau /= k;
	}
};

ll lcm(ll a, ll b) {
	return (a * b) / __gcd(a, b);
}

void plusF(Fraction a, Fraction b, Fraction &c) {
	ll k = lcm(a.mau, b.mau);
	ll x = k / a.mau * a.tu, y = k / b.mau * b.tu;
	c.mau = k;
	c.tu = x + y;
}

int main() {
    fastread();
	Fraction a, b, c;
	cin >> a.tu >> a.mau >> b.tu >> b.mau;
	a.rutgon();
	b.rutgon();
	plusF(a, b, c);
	c.rutgon();
	cout << c.tu << "/" << c.mau;
}

