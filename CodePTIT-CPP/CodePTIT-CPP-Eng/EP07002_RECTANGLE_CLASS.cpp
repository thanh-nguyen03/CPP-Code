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

class Rectangle {
	public:
	ll l, w;
	string color;
	
	bool checkValid() {
		if (l > 0 && w > 0) return true;
		return false;
	}
	
	void standardName() {
		for (int i = 0; i < color.length(); i++) {
			if (color[i] >= 'A' && color[i] <= 'Z') color[i] += 32;
		}
		color[0] -= 32;
		for (int i = 0; i < color.length(); i++) {
			if (color[i] == ' ' && color[i + 1] != ' ') {
				color[i + 1] -= 32;
			}
		}
	}
	
	ll calcPeri() {
		return (l + w) * 2;
	}
	
	ll calcArea() {
		return l * w;
	}
};

int main() {
    fastread();
	Rectangle A;
	cin >> A.l >> A.w >> A.color;
	if (A.checkValid() == false) {
		cout << "INVALID";
		return 0;
	}
	A.standardName();
	cout << A.calcPeri() << " " << A.calcArea() << " " << A.color;
}

