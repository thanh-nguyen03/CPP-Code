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

int main() {
	int n, m;
	ifstream ip;
	ip.open("DATA.in");
	ip >> n >> m;
	map<int, int> mp;
	int a;
	for (int i = 0; i < n; i++) {
		ip >> a;
		mp[a] = 1;
	}
	for (int i = 0; i < m; i++) {
		ip >> a;
		if (mp[a] == 1) mp[a] = 2;
	}
	
	for (auto x : mp) {
		if (x.second == 2) cout << x.first << " ";
	}
}

