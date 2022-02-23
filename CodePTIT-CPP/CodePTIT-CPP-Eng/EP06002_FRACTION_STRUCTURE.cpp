#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct Fraction {
	ll tu, mau;
};

void input(struct Fraction &p) {
	cin >> p.tu >> p.mau;
}

void simplify(struct Fraction &p) {
	ll k = __gcd(p.tu, p.mau);
	p.tu /= k;
	p.mau /= k;
}

void print(struct Fraction p) {
	cout << p.tu << "/" << p.mau;
}

int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}

