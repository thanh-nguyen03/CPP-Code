#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
	double n;
	cin >> n;
	cout << fixed << setprecision(2) << (n * 9 / 5) + 32.0;
}

