#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int calc(ll n) {
	int sum = 0;
	while(n) {
		sum += n % 10;
		n /= 10;
	}
	if (sum < 10) return sum;
	return calc(sum);
}

ll n;
void run_test_case() {
	cin >> n;
	cout << calc(n) << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while(t--)
		run_test_case();
}

