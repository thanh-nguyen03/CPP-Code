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

bool checkInt(string s) {
	if (s.size() > 9) return 0;
	for (int i = 0; i < s.size(); i++) {
		if (!isdigit(s[i])) return 0;
	}
	return 1;
}

int main() {
	ifstream input;
	input.open("DATA.in");
	ll ans = 0;
	string s;
	while (input >> s) {
		if (checkInt(s)) ans += stoi(s);
	}
	cout << ans;
}

