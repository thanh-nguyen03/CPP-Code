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
#define pb push_back

class Complex {
	public:
	int real, im;
};

void sum(Complex a, Complex b, Complex &c) {
	c.real = a.real + b.real;
	c.im = a.im + b.im;
}

void product(Complex a, Complex b, Complex &c) {
	c.real = (a.real * b.real - a.im * b.im);
	c.im = (a.real * b.im + b.real * a.im);
}

void output(Complex a) {
	cout << a.real;
	if (a.im > 0) cout << "+";
	cout << a.im << "i";
}

void run_test_case() {
	Complex a, b, tmp1, c, d;
	cin >> a.real >> a.im >> b.real >> b.im;
	sum(a, b, tmp1);
	product(a, tmp1, c);
	product(tmp1, tmp1, d);
	output(c);
	cout << ",";
	output(d);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

