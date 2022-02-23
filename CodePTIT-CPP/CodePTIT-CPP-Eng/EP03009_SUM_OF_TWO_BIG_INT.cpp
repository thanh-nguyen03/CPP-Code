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

string sum(string x, string y) {
	string s = "";
	if (x.size() < y.size()) x.insert(0, y.size() - x.size(), '0');
	else if (x.size() > y.size()) y.insert(0, x.size() - y.size(), '0');
	
	int tmp = 0;
	for (int i = x.size() - 1; i >= 0; i--) {
		tmp += x[i] + y[i] - '0' - '0';
		s.insert(0, 1, tmp % 10 + '0');
		tmp /= 10;
	}
	if (tmp > 0) s.insert(0, 1, tmp + '0');
	return s;
}

string x, y;
void run_test_case() {
	cin >> x >> y;
	cout << sum(x, y) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

