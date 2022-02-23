#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <fstream>
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
	ifstream ip1;
	ip1.open("DATA1.in");
	ifstream ip2;
	ip2.open("DATA2.in");
	string s;
	map<string, int> mp;
	
	while (ip1 >> s) {
		lower(s);
		mp[s] = 1;
	}
	while (ip2 >> s) {
		lower(s);
		if (mp[s] == 1 || mp[s] == 3) mp[s] = 3;
		else mp[s] = 2;
	}
	
	for (auto m : mp) {
		if (m.second == 1) cout << m.first << " ";
	}
	cout << endl;
	for (auto m : mp) {
		if (m.second == 2) cout << m.first << " ";
	}
	ip1.close();
	ip2.close();
}

