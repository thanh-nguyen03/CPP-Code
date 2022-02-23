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

class Triangle {
	public:
	db a, b, c;
	
	bool checkValid() {
		if (a + b <= c || a + c <= b || b + c <= a) return false;
		return true;
	}
	
	db calcPeri() {
		return a + b + c;
	}
};

void run_test_case() {
	Triangle A;
	db x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	A.a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	A.b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	A.c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	
	if (!A.checkValid()) {
		cout << "INVALID" << endl;
		return;
	}
	cout << fixed << setprecision(3) << A.calcPeri() << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

