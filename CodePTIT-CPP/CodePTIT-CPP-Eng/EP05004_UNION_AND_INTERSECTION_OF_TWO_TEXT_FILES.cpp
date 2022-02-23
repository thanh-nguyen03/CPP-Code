#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <utility>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

void lower(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
}

int main() {
	ifstream i1;
	i1.open("DATA1.in");
	ifstream i2;
	i2.open("DATA2.in");
	string s;
	set<string> intersection;
	map<string, int> mp;
	while (i1 >> s) {
		lower(s);
		intersection.insert(s);
		mp[s] = 1;
	}
	while (i2 >> s) {
		lower(s);
		intersection.insert(s);
		if (mp[s] == 1) mp[s] = 2;
	}
	for (auto x : intersection) cout << x << " ";
	cout << endl;
	for (auto m : mp) {
		if (m.second == 2) cout << m.first << " ";
	}
}

