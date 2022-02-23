#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));



int main() {
    fastread();
	int n, y = 0, m = 0, d = 0;
	cin >> n;
	y = n / 365;
	n %= 365;
	m = n / 7;
	n %= 7;
	d = n;
	cout << y << " " << m << " " << d;
}

