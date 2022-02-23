#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
	double a, b;
	char c;
	cin >> a >> c >> b;
	switch(c) {
		case '+':
			cout << fixed << setprecision(2) << a + b;
			break;
		case '-':
			cout << fixed << setprecision(2) << a - b;
			break;
		case '*':
			cout << fixed << setprecision(2) << a * b;
			break;
		default:
			cout << fixed << setprecision(2) << a / b;
			break;
	}
}

