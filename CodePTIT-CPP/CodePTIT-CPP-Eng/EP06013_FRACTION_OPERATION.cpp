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
#define t T;

struct Fraction {
	ll tu, mau;
};

ll lcm(ll a, ll b){
	return (a * b) / __gcd(a, b);
}

void simplize(Fraction &a) {
	ll k = __gcd(a.tu, a.mau);
	a.tu /= k;
	a.mau /= k;
}

void plusF(Fraction a, Fraction b, Fraction &c) {
	ll k = lcm(a.mau, b.mau);
	ll x = k / a.mau * a.tu, y = k / b.mau * b.tu;
	c.mau = k;
	c.tu = x + y;
}

void multiply(Fraction a, Fraction b, Fraction &c) {
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
}

void read_input(Fraction &a) {
	cin >> a.tu >> a.mau;
}

void process(Fraction a, Fraction b) {
	Fraction c, d, tmp;
	simplize(a);
	simplize(b);
	plusF(a, b, c);
	multiply(c, c, c);
	simplize(c);
	cout << c.tu << "/" << c.mau << " ";
	multiply(a, b, tmp);
	multiply(c, tmp, d);
	simplize(d);
	cout << d.tu << "/" << d.mau;
	cout << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}

