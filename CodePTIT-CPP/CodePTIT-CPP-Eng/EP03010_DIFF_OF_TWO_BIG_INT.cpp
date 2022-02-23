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

void swap(string &a, string &b) {
	string tmp = a;
	a = b;
	b = tmp;
}

string diff(string a, string b) {
	string s = "";
	if (a.size() > b.size()) b.insert(0, a.size() - b.size(), '0');
	else if (a.size() < b.size()) a.insert(0, b.size() - a.size(), '0');
	if (b > a) swap(a, b);
	
	int tmp = 0;
	for (int i = a.size() - 1; i >= 0; i--) {
		tmp = a[i] - b[i] - tmp;
		if (tmp < 0) {
			tmp += 10;
			s.insert(0, 1, tmp + '0');
			tmp = 1;
		}
		else {
			s.insert(0, 1, tmp + '0');
			tmp = 0;
		}
	}
	return s;
}

string a, b;
void run_test_case() {
	cin >> a >> b;
	cout << diff(a, b) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

