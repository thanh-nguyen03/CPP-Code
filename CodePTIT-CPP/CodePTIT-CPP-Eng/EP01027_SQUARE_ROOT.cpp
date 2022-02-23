#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

double n;
void run_test_case() {
	cin >> n;
	double sum = 0;
	for (double i = 1; i <= n; i++) {
		sum = sqrt(sum + i);
	}
	cout << fixed << setprecision(5) << sum << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

