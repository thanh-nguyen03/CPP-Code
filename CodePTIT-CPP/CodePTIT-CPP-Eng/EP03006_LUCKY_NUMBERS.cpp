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

int sumDigit(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	if (sum < 10) return sum;
	return sumDigit(sum);
}

string s;
void run_test_case() {
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	int final = sumDigit(sum);
	if (final == 9) {
		cout << 1 << endl;
		return;
	}
	cout << 0 << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

