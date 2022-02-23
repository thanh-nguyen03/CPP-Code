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

class Point {
	public:
	db x, y;
};

class Triangle {
	public:
	Point d, e, f;
	db a, b, c;
	
	void calcSide() {
		a = sqrt((d.x - e.x) * (d.x - e.x) + (d.y - e.y) * (d.y - e.y));
		b = sqrt((d.x - f.x) * (d.x - f.x) + (d.y - f.y) * (d.y - f.y));
		c = sqrt((f.x - e.x) * (f.x - e.x) + (f.y - e.y) * (f.y - e.y));
	}
	
	bool checkValid() {
		if (a + b <= c || a + c <= b || b + c <= a) return false;
		return true;
	}
	
	db calcArea() {
		return sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)) / 4;
	}
};

void run_test_case() {
	Triangle A;
	db x1, x2, x3, y1, y2, y3;
	cin >> A.d.x >> A.d.y >> A.e.x >> A.e.y >> A.f.x >> A.f.y;
	A.calcSide();
	
	if (!A.checkValid()) {
		cout << "INVALID" << endl;
		return;
	}
	printf("%.2lf", A.calcArea());
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

