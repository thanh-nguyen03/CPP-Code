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
#define pb push_back

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

string productStep(char a, string b) {
	string s = "";
	int tmp = 0;
	for (int i = b.size() - 1; i >= 0; i--) {
		tmp = (a - '0') * (b[i] - '0') + tmp;
		s.insert(0, 1, tmp % 10 + '0');
		tmp /= 10;
	}
	if (tmp > 0) s.insert(0, 1, tmp + '0');
	return s;
}

string product(string a, string b) {
	string s = "";
	int len = a.length();
	string s1[len];
	for (int i = len - 1; i >= 0; i--) {
		s1[i] = productStep(a[i], b);
		s1[i].insert(s1[i].size(), len - i - 1, '0');
		s = sum(s, s1[i]);
	}
	return s;
}

string x, y;
void run_test_case() {
	cin >> x >> y;
	cout << product(x, y) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

