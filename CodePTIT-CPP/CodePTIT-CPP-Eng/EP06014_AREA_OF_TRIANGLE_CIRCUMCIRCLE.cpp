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
#define PI 3.141592653589793238;

struct Triangle {
	db x1, y1, x2, y2, x3, y3;
	
	db ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	db bc = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	db ac = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	
	bool checkValid() {
		if (ab + bc > ac && ab + ac > bc && bc + ac > ab) {
			return true;
		}
		return false;
	}
	
	db calculateS() {
		return sqrt((ab + bc + ac) * (ab + bc - ac) * (bc + ac - ab) * (ac + ab - bc)) / 4;
	}
	
	db calculateRadius() {
		db s = calculateS();
		return ab * bc * ac / 4 / s;
	}
	
	db calulateArea() {
		db r = calculateRadius();
		r *= r;
		r *= PI
		return r;
	}
};

void run_test_case() {
	db x1, x2, x3, y1, y2, y3; 
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	db a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	db b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	db c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "INVALID" << endl;
		return;
	}
	db ans = 1, r, s;
	s = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)) / 4;
	r = a * b * c / (4 * s);
	ans *= PI;
	ans *= r;
	ans *= r;
	cout << fixed << setprecision(3) << ans << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--) {
		run_test_case();
	}
}

