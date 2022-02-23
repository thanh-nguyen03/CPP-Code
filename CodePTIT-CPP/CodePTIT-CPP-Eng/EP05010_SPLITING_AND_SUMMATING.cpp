#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
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

void solve(string s) {
	string a = "", b = "";
	int n = s.size();
	for (int i = 0; i < n / 2; i++) a.pb(s[i]);
	for (int i = n / 2; i < n; i++) b.pb(s[i]);
	string tong = sum(a, b);
	cout << tong << endl;
	if (tong.size() > 1) solve(tong);
}

int main() {
	ifstream ip;
	ip.open("DATA.in");
	string s;
	ip >> s;
	solve(s);
}

