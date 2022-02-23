#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int x, y;
void run_test_case() {
	cin >> x >> y;
	while(x % 2 == 0) x /= 2;
	while(x % 3 == 0) x /= 3;
	while(y % 2 == 0) y /= 2;
	while(y % 3 == 0) y /= 3;
	
	if (x == y) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

