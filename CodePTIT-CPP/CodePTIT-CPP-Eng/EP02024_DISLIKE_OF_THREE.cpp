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

bool check(ll n) {
	if (n % 3 == 0) return 0;
	if (n % 10 == 3) return 0;
	return 1;
}

int main() {
    fastread();
	ll n, i = 1;
	cin >> n;
	while (n > 0) {
		if (check(i)) n--;
		i++;
	}
	cout << i - 1;
}

